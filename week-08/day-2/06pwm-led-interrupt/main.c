/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

static void SystemClock_Config(void);

/* the timer's config structure */
TIM_HandleTypeDef timer_handle;
TIM_HandleTypeDef timer_handle2;

TIM_OC_InitTypeDef pwm_config;

GPIO_InitTypeDef PA15_LED_config;

volatile int rate = 0;
volatile int decrease = 0;

void init_LED() {
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;

	PA15_LED_config.Pin = GPIO_PIN_15;
	PA15_LED_config.Mode = GPIO_MODE_AF_PP; /* configure as output, in PUSH-PULL mode */
	PA15_LED_config.Pull = GPIO_NOPULL;
	PA15_LED_config.Speed = GPIO_SPEED_HIGH;
	PA15_LED_config.Alternate = GPIO_AF1_TIM2; /* we need this alternate function to use TIM2 in OC mode */

	HAL_GPIO_Init(GPIOA, &PA15_LED_config);
}

void init_timer(void) {
	__HAL_RCC_TIM2_CLK_ENABLE();

	timer_handle.Instance = TIM2;
	timer_handle.Init.Prescaler = 108 - 1;
	timer_handle.Init.Period = 100 - 1;
	timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

	HAL_TIM_Base_Init(&timer_handle);

	/* assign the highest priority to our interrupt line */
	//HAL_NVIC_SetPriority(TIM2_IRQn, 1, 0);
	/* tell the interrupt handling unit to process our interrupts */
	//HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

void init_timer2(void) {
	__HAL_RCC_TIM3_CLK_ENABLE();

	timer_handle2.Instance = TIM3;
	timer_handle2.Init.Prescaler = 108000 - 1;
	timer_handle2.Init.Period = 500 - 1;
	timer_handle2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	timer_handle2.Init.CounterMode = TIM_COUNTERMODE_UP;

	HAL_TIM_Base_Init(&timer_handle2);

	/* assign the highest priority to our interrupt line */
	HAL_NVIC_SetPriority(TIM3_IRQn, 1, 0);

	/* tell the interrupt handling unit to process our interrupts */
	HAL_NVIC_EnableIRQ(TIM3_IRQn);
}

void init_PWM() {

	pwm_config.Pulse = 50;
	pwm_config.OCMode = TIM_OCMODE_PWM1;
	pwm_config.OCPolarity = TIM_OCPOLARITY_HIGH;
	pwm_config.OCFastMode = TIM_OCFAST_ENABLE;

	HAL_TIM_PWM_ConfigChannel(&timer_handle, &pwm_config, TIM_CHANNEL_1);
}

int main(void) {
	HAL_Init();
	SystemClock_Config();

	init_timer();
	init_timer2();
	init_LED();
	init_PWM();

	HAL_TIM_PWM_Start(&timer_handle, TIM_CHANNEL_1);
	/* starting the timer in interrupt mode */
	HAL_TIM_Base_Start_IT(&timer_handle2);

	while (1) {
		__HAL_TIM_SET_COMPARE(&timer_handle, TIM_CHANNEL_1, rate);
	}
}

void TIM3_IRQHandler(void) {
	HAL_TIM_IRQHandler(&timer_handle2);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

	if (htim->Instance == TIM3) {
		if (rate < 50 && decrease == 0) {
			rate++;
			if (rate == 49) {
				decrease = 1;
			}
		}
		if (rate >= 0 && decrease == 1) {
			rate--;
			if (rate == 0) {
				decrease = 0;
			}
		}
	}
}

void Error_Handler(void) {
}

void SystemClock_Config(void) {
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
