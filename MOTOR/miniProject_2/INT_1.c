/*
 * INT_1.c
 *
 *  Created on: Nov 6, 2020
 *      Author: mostafa farid
 */

#include "INT_1.h"
uint8 intFlag=0;
void INT1_Init()
{
	// enable interrupt INT 1
	INT1_DIRECTION 	&=(~(1<<INT1));
	GICR			|=(1<<INT1);
	// INT1 rising edge
	MCUCR			|=(1<<ISC10)|(1<<ISC10);


}

ISR(INT1_vect){

	MOTOR_DATA	^=(1<<MOTOR_IP1);
	MOTOR_DATA	^=(1<<MOTOR_IP2);


}
