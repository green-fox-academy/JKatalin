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

int main(void)
{
    HAL_Init();

    BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

    BSP_LED_Init(LED1);

    int frequency = 2000;
    int status = 0;

    while (1) {

        if (BSP_PB_GetState(BUTTON_KEY) == 1) {
        	while (BSP_PB_GetState(BUTTON_KEY) == 1){
        	}
        	while(status == 0){

        	while (frequency > 125){
        		frequency = frequency / 2;
        		int counter = 0;
        		while(counter != 3){
        			BSP_LED_On(LED1);
        			HAL_Delay(frequency);
        			BSP_LED_Off(LED1);
        			HAL_Delay(frequency);

        			counter += 1;
        		}
        	}

        	while (frequency < 1000){
        		frequency = frequency * 2;
        	    int counter = 0;
        	    while(counter != 3){
        	        BSP_LED_On(LED1);
        	        HAL_Delay(frequency);
        	        BSP_LED_Off(LED1);
        	        HAL_Delay(frequency);

        	        counter += 1;
        	    }
        	}
        	}
        }
    }
}


