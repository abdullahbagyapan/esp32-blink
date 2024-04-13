/*
 @module: LED
 @author: Abdullah Bagyapan
 @date:   13/04/2024
*/


/*================================== Libraries ==================================*/


// Module's own header
#include "led.h"


// ESP32 libraries
#include "driver/gpio.h"


/*================================== Functions ==================================*/


void LED_Init(void) {

    gpio_reset_pin(LED_PIN);

    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

}


void LED_On(void) {

    gpio_set_level(LED_PIN, LED_LEVEL_ON);

}


void LED_Off(void) {

    gpio_set_level(LED_PIN, LED_LEVEL_OFF);

}