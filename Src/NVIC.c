/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "NVIC.h"

void intialize_EXTI_RTC(){
	EXTI_IMR |= BIT17;
	EXTI_RTSR |= BIT17;
}

void initialize_NVIC_interrupt_priorities(){
	NVIC_IPR7 |= (0xFF << 8); //PRI29 Sets the AES_RNG_LPUART1 interrupt priority
	NVIC_IPR5 |= (0xBF << 24); //PRI23 Sets the I2C1 interrupt priority
	//NVIC_IPR2 |= (0xBE << 24); //PRI11 Sets the DMA_CH47 interrupt priority
	//NVIC_IPR7 |= (0xBF << 0); //PRI28 Sets the USART2 interrupt priority
	NVIC_IPR0 |= (0x7F << 16); //PRI2 Sets the RTC interrupt priority
}

void initialize_NVIC_LPTIM1(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(13%32)); //Enable LPTIM1_IRQHandler
}

void initialize_NVIC_PendSV(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(13%32)); //Enable LPTIM1_IRQHandler
}

void intialize_NVIC_AES_RNG_LPUART1(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(29%32)); //Enable AES_RNG_LPUART1_IRQHandler
}

void Set_Pending_AES_RNG_LPUART1_Interrupt(){
	NVIC_ISPR |= (BIT29); //Forces interrupts into the pending state
}

void Clear_Pending_AES_RNG_LPUART1_Interrupt(){
	NVIC_ICPR |= (BIT29); //Removes the pending state from interrupts
}

void PendSv_Set(){
	SCB_ICSR |= BIT28; //PENDSVSET
}

void PendSv_Clear(){
	SCB_ICSR |= BIT27; //PENDSVSCLR
}

void intialize_NVIC_I2C1(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(23%32)); //Enable I2C1_IRQHandler
}

void intialize_NVIC_USART2(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(28%32)); //Enable USART2_IRQHandler - Transmission using DMA, transfer complete: Software waits until TC=1
}

void intialize_NVIC_DMA_CH47(){
	NVIC_ISER |= (1<<(11%32)); //Enable DMA1_Channel4_7_IRQHandler - Reception using DMA transfer complete: TCIF=1 in DMA_ISR
}

void intialize_NVIC_RTC(){
	//Set NVIC interrupt registers
	NVIC_ISER |= (1<<(2%32)); //Enable RTC_IRQHandler
}
