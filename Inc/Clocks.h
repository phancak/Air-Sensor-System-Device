/*
 * Clocks.h
 *
 *  Created on: Dec 19, 2023
 *      Author: guest1
 */

#ifndef CLOCKS_H_
#define CLOCKS_H_

#include "Global.h"

void intialize_Clock_HSI16();
void set_system_clock();
void initialize_I2C1_Clock();
void initialize_LSI_Clock();
void initialize_LSE_Clock();
void initialize_LPTIM1_Clock();
void initialize_GPIOA_Clock();
void initialize_GPIOB_Clock();
void initialize_USART2_Clock();
void initialize_DMA_Clock();

#endif /* CLOCKS_H_ */
