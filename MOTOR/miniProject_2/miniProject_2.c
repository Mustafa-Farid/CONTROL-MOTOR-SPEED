/*
 * miniProject_2.c
 *
 *  Created on: Nov 6, 2020
 *      Author: mostafa farid
 */

#include"PWM.h"
#include"INT_1.h"
#include"lcd.h"
#include"adc.h"
extern uint8 intFlag;
int main(){
	uint16 res;

	SREG |= (1<<7);
	LCD_init();
	ADC_init();
	DDRB  |=(1<<PB0) | (1<<PB1); // pins of motor output
	PORTB &=(~(1<<PB0));
	PORTB |=(1<<PB1);		// clock wise at beginning;
	INT1_Init();
	LCD_clearScreen();

	while (1)
	{

		LCD_goToRowColumn(0,10);
		res = ADC_readChannel(0);
		PWM_Timer0(res/4);
		LCD_intgerToString(res);
		if(intFlag==1)
		{
			MOTOR_DATA	^=(1<<MOTOR_IP1);
			MOTOR_DATA	^=(1<<MOTOR_IP2);
		}

	}

}
