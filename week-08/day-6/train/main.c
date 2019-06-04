#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

#define UART_PUTCHAR int __io_putchar(int ch)

typedef enum {
	OPEN, SECURING, SECURED, OPENING
} status_t;

void init_user_button(void);
static void SystemClock_Config(void);
void init_uart();
void init_timer();

TIM_HandleTypeDef timer_handle;
GPIO_InitTypeDef user_button_config;
UART_HandleTypeDef uart_handle;

volatile int counter = 0;
status_t status = OPEN;

int main(void)
{

	HAL_Init();
	SystemClock_Config();

	BSP_LED_Init(LED_GREEN);
	init_user_button();
	init_timer();
	init_uart();

	HAL_TIM_Base_Start_IT(&timer_handle);

	printf("%s\n", "Open");

	while (1) {
	}
}

void init_user_button(void)
{
	__HAL_RCC_GPIOI_CLK_ENABLE();

	user_button_config.Pin = GPIO_PIN_11;
	user_button_config.Mode = GPIO_MODE_IT_RISING;
	user_button_config.Pull = GPIO_NOPULL;
	user_button_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &user_button_config);

	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 16, 0);
}

void EXTI15_10_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (status == OPEN) {
		status = SECURING;
		counter = 0;
		printf("%s\n", "Securing");
	}
	if (status == SECURED) {
		status = OPENING;
		counter = 0;
		printf("%s\n", "Opening");
	}
}

void init_timer()
{
	__HAL_RCC_TIM2_CLK_ENABLE();

	timer_handle.Instance = TIM2;
	timer_handle.Init.Prescaler = 10800 - 1; // 108000000/108=1000000 -> speed of 1 count-up: 1/1000000 s = 0.001 ms
	timer_handle.Init.Period = 5000 - 1; // 100 x 0.001 ms = 10 ms = 0.01 s period
	timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

	/* configuring the timer in PWM mode instead of calling HAL_TIM_Base_Init(&timer_handle) */
	HAL_TIM_Base_Init(&timer_handle);

	HAL_NVIC_SetPriority(TIM2_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

void TIM2_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&timer_handle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim->Instance == TIM2) {

		if (status == OPEN) {
			counter++;
			if (counter == 2) {
				BSP_LED_Toggle(LED_GREEN);
				counter = 0;
			}
		}

		if (status == SECURING) {
			counter++;
			BSP_LED_Toggle(LED_GREEN);
			if (counter == 10) {
				status = SECURED;
				counter = 0;
				printf("%s\n", "Secured");
			}
		}

		if (status == SECURED) {
			BSP_LED_Off(LED_GREEN);
		}

		if (status == OPENING) {
			counter++;
			BSP_LED_Toggle(LED_GREEN);
			if (counter == 12) {
				status = OPEN;
				counter = 0;
				printf("%s\n", "Open");
			}
		}
	}
}

void init_uart()
{
	/* enable the clock of the used peripherial instance */
	__HAL_RCC_USART1_CLK_ENABLE();

	/* defining the UART configuration structure */
	uart_handle.Instance = USART1;
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);
}

UART_PUTCHAR {
 HAL_UART_Transmit(&uart_handle, (uint8_t*) &ch, 1, 0xFFFF);
 return ch;
 }

void Error_Handler(void)
{
}

void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE();

	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/*int _write(int file, char *ptr, int len)

{
	int DataIdx;
	for (DataIdx = 0; DataIdx < len; DataIdx++) {

		HAL_UART_Transmit(&uart_handle, (uint8_t*) &ptr[DataIdx], 1,
		HAL_MAX_DELAY);

	}
	return len;
}*/

