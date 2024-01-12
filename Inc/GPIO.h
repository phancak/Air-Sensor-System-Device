/*
 * GPIO.h
 *
 *  Created on: Dec 19, 2023
 *      Author: guest1
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "Global.h"

void initialize_GPIOA(uint8_t CLKportNumber, uint8_t DIOportNumber);
void initialize_GPIOA_GPO_PP(uint8_t portNumber);
void initialize_GPIOA_OD_PU(uint8_t portNumber);
void initialize_GPIOA_LPTIM();
void intialize_GPIO_USART2();
void initialize_GPIO_AM2302();
void Assert_GPIOA_Output(uint8_t portNumber);
void initialize_GPIOA_Output(uint8_t portNumber, uint8_t polarity);

#endif /* GPIO_H_ */
