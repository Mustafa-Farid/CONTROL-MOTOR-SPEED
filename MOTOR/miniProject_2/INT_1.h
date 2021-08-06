/*
 * INT_1.h
 *
 *  Created on: Nov 6, 2020
 *      Author: mostafa farid
 */

#ifndef INT_1_H_
#define INT_1_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

// interrupt defines
#include"INT_1.h"
#define INT1_DIRECTION DDRD
#define INT1_DATA PORTD


// functions prototype



void INT1_Init(void);

ISR(INT1_vect);

#endif /* INT_1_H_ */
