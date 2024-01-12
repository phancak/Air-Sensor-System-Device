/*
 * LPTIM.h
 *
 *  Created on: Dec 19, 2023
 *      Author: guest1
 */

#ifndef LPTIM_H_
#define LPTIM_H_

#include "Global.h"

void initialize_LPTIM();
void LPTIM1_Set_Period(uint16_t period);
void LPTIM1_Start_Continuous_Mode();
void LPTIM1_Disable();
void LPTIM1_Enable();

#endif /* LPTIM_H_ */
