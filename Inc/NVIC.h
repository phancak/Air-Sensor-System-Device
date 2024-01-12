/*
 * NVIC.h
 *
 *  Created on: Jan 8, 2024
 *      Author: guest1
 */

#ifndef NVIC_H_
#define NVIC_H_

#include "Global.h"

void PendSv_Set();
void PendSv_Clear();
void intialize_NVIC_AES_RNG_LPUART1(); //Global queue processing interrupt
void Set_Pending_AES_RNG_LPUART1_Interrupt();
void Clear_Pending_AES_RNG_LPUART1_Interrupt();
void intialize_NVIC_I2C1();
void intialize_NVIC_USART2();
void intialize_NVIC_DMA_CH47();
void intialize_NVIC_RTC();
void initialize_NVIC_LPTIM1();
void initialize_NVIC_interrupt_priorities();
void intialize_EXTI_RTC();

#endif /* NVIC_H_ */
