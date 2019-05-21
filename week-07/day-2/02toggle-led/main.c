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

    int status = 0;

    while (1) {
        /* If button is pressed do something */
        if (BSP_PB_GetState(BUTTON_KEY) == 1 && status == 0) {
        	BSP_LED_On(LED1);                                  //in this order turn on when you push
        	status = 1;
        	while(BSP_PB_GetState(BUTTON_KEY) == 1){
        	}

        } else if(BSP_PB_GetState(BUTTON_KEY) == 1 && status == 1){
        	while(BSP_PB_GetState(BUTTON_KEY) == 1){           //in this order you have to push and erase the button and after turn off
        	}
            BSP_LED_Off(LED1);
            status = 0;
        }
    }
}


