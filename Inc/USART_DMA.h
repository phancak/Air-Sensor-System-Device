/*
 * USART_DMA.h
 *
 *  Created on: Dec 20, 2023
 *      Author: guest1
 */

#ifndef USART_DMA_H_
#define USART_DMA_H_

#include "Global.h"

//void intialize_Clock();
void initialize_USART2_DMA();
void initialize_USART2();
void USART2_Transmission_Disable();
void USART2_Transmission_Enable();
void USART2_Reception_Enable();
void USART2_Reception_Disable();
void USART2_Set_Reception_Blocks(uint16_t noDataBlocks);
void USART2_Set_Transmission_Blocks(uint16_t noDataBlocks);
void USART2_Send_Data(uint16_t noDataBlocks); //DMA Transmission
void Usart2_Process_RX_Buffer();
void DMA_Set_Ch1_Destination();
void DMA_Start_Ch1_Transfer();
void Usart2_Copy_Into_TX_Buffer(uint8_t* message);

extern uint8_t USART_transmission_in_progress_flag;

#endif /* USART_DMA_H_ */
