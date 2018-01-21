#include <Arduino.h>
#ifndef __CONFIG__

/*include aller header*/
#include "diceOutput.h"
/*
definition der ausgabeform
Muss name des jeweiligen Headers sein
*/
#define OUTPUT_FORM diceOutput

#define HOW_MANY_LAMPS 7
/*
Definition aller LED Pins
		  l   r
top		X---X
mid		X-X-X
bot		X---X

*/


#define led_middle 13
#define led_bot_r 12
#define led_mid_r 11
#define led_top_r 10
#define led_bot_l 9
#define led_mid_l 8
#define led_top_l 7


/*Definition des Input Buttons*/
#define BUTTON_PIN 2
/*Zeit die der Button gedrueckt werden muss, damit die Animation gespielt wird 
bsp. 20: 20/10 = 2 sek */
#define BUTTON_HOLD_TIME 20


#endif // !__CONFIG__
