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

int main(void) {
	HAL_Init();

	uint32_t red_led_on = (1 << 7);
	uint32_t red_led_off = red_led_on << 16;

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */

	GPIOF->MODER |= (GPIO_MODER_MODER7_0); /* configure PIx in output mode */
	//GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7);    /* ensure push pull mode selected default */
	GPIOF->MODER |= (GPIO_MODER_MODER8_0);
	GPIOF->MODER |= (GPIO_MODER_MODER9_0);
	GPIOF->MODER |= (GPIO_MODER_MODER10_0);

	while (1) {

		for (int i = 0; i < 4; i++) {
			GPIOF->BSRR = red_led_on << i;
			HAL_Delay(100);
			GPIOF->BSRR = red_led_off << i;
		}

		for (int i = 2; i > 0; i--) {
			GPIOF->BSRR = red_led_on << i;
			HAL_Delay(100);
			GPIOF->BSRR = red_led_off << i;
		}
	}
}

