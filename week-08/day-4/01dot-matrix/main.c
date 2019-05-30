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


#define	HT16K33_ADDRESS		(0b1110000 << 1)

/* regiszter címek */
#define SYSTEM_SETUP_REG	0x20
#define ROW_INT_SET_REG		0xA0
#define DISPLAY_SETUP_REG	0x80

/* regiszter értékek */
#define STANDBY_MODE		(0 << 0)
#define NORMAL_MODE			(1 << 0)
#define OUTPUT_MODE			(0 << 0)
#define DISP_ON_BLINK_OFF	(1 << 0)

I2C_HandleTypeDef hi2c1;

uint8_t normal_mode = (SYSTEM_SETUP_REG | NORMAL_MODE);
uint8_t output_mode = (ROW_INT_SET_REG | OUTPUT_MODE);
uint8_t no_blinking = (DISPLAY_SETUP_REG | DISP_ON_BLINK_OFF);

GPIO_InitTypeDef SCL_SDA_config;

const uint8_t clear[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);

void dot_matrix_init(void) {
	HAL_I2C_Master_Transmit(&hi2c1, HT16K33_ADDRESS, &normal_mode, 1, 100);
	HAL_I2C_Master_Transmit(&hi2c1, HT16K33_ADDRESS, &output_mode, 1, 100);
	HAL_I2C_Master_Transmit(&hi2c1, HT16K33_ADDRESS, &no_blinking, 1, 100);
	HAL_Delay(50);
}

int main(void) {

	HAL_Init();

	SystemClock_Config();

	MX_GPIO_Init();
	MX_I2C1_Init();

	dot_matrix_init();

	uint8_t first_column = 0b00000001;
	uint8_t clear = 0;

	while (1) {


		for (int i = 0; i < 8; i++){
		HAL_Delay(100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 0, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 2, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 4, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 6, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 8, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 10, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 12, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);
		HAL_I2C_Mem_Write(&hi2c1, HT16K33_ADDRESS, 14, I2C_MEMADD_SIZE_8BIT, &first_column, 1, 100);

		first_column = first_column << 1;
		if (i == 7){
			i = -1;
			first_column = 0b00000001;
		}
		}
	}
}

void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };
	RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = { 0 };

	/** Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE();

	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
	PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
	PeriphClkInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
	if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
		Error_Handler();
	}
}


static void MX_I2C1_Init(void) {

	__HAL_RCC_I2C1_CLK_ENABLE();

	hi2c1.Instance = I2C1;
	hi2c1.Init.Timing = 0x00303D5B;
	hi2c1.Init.OwnAddress1 = 0;
	hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
	hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
	hi2c1.Init.OwnAddress2 = 0;
	hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
	hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
	hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
	if (HAL_I2C_Init(&hi2c1) != HAL_OK) {
		Error_Handler();
	}
	/** Configure Analogue filter
	 */
	if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE)
			!= HAL_OK) {
		Error_Handler();
	}
	/** Configure Digital filter
	 */
	if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK) {
		Error_Handler();
	}
}


static void MX_GPIO_Init(void) {
	__HAL_RCC_GPIOB_CLK_ENABLE();
	 SCL_SDA_config.Pin         = GPIO_PIN_8 | GPIO_PIN_9;
	 SCL_SDA_config.Pull        = GPIO_PULLUP;
	 SCL_SDA_config.Mode        = GPIO_MODE_AF_OD;
	 SCL_SDA_config.Alternate   = GPIO_AF4_I2C1;
	 HAL_GPIO_Init(GPIOB, &SCL_SDA_config);
}


void Error_Handler(void) {
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif /* USE_FULL_ASSERT */

