/*
 @file:   main.c
 @author: Abdullah Bagyapan
 @date:   13/04/2024
*/


/*================================== Libraries ==================================*/


// Other modules
#include "LED/led.h"

// Standard libraries
#include <stdio.h>


/*================================== Prototypes ==================================*/


void main_delay(volatile uint32_t);


/*================================== Functions ==================================*/


/*
 @brief:  Delay

 @author  Abdullah Bagyapan

 @date    13/04/2024

 @todo    Delay in Ms(millisecond)

 @param   None

 @return  None
*/
void main_delay(volatile uint32_t ui32DelayCounter) {

    while (ui32DelayCounter != 0) {

        ui32DelayCounter--;
    }

}


void app_main(void)
{

    LED_Init();

    while (1) {

        LED_On();
        main_delay(8000000);

        LED_Off();
        main_delay(8000000);

    }


}