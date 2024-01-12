/*
 * AM2302.h
 *
 *  Created on: Dec 20, 2023
 *      Author: guest1
 */

#ifndef AM2302_H_
#define AM2302_H_

#include "Global.h"

//Based on 16Mhz clock
#define AM2302_TIMEOUT	    (uint8_t)200 //The signal stays low or high for too many clock ticks (Considered lost)
#define AM2302_TIME_DATA0	(uint8_t)40 //Threshold between data being 0 and 1

uint8_t AM2302_Request_Data(uint16_t *pRH_data, uint16_t *pTemperature_data);
void pause_us(uint32_t n);

extern uint8_t data[42];
extern uint8_t data_low[42];
extern uint16_t RH_data;
extern uint16_t temperature_data;
extern uint8_t check_sum;

#endif /* AM2302_H_ */
