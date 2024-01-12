/*
 * RTC.h
 *
 *  Created on: Dec 20, 2023
 *      Author: guest1
 */

#ifndef RTC_H_
#define RTC_H_

#include "Global.h"

void intialize_RTC_Clock();
void RTC_Set_Date_Time(uint8_t* message);
void RTC_AlarmA_Set_Sec(uint8_t seconds);
void RTC_AlarmA_Set_Min(uint8_t minute);
void RTC_AlarmA_Set_Hr(uint8_t hour);
void RTC_AlarmA_Init_Min();
void RTC_AlarmA_Init_Sec();
void RTC_AlarmA_Init_Min_Sec();
void RTC_AlarmA_Set_First_Alarm(uint8_t* message);
void RTC_AlarmA_Enable();
void RTC_AlarmA_Disable();
void RTC_Read_Date_Time(uint8_t* message); //Updates message array (global) with date and time
void RTC_AlarmA_Set_Period(uint8_t* message, uint8_t* RTC_Alarm_Unit_Status); //Gets data from server message
void RTC_Increment_AlarmA(uint32_t sampling_Period);
void RTC_Get_AlarmA_Period(uint8_t* message_block_internal);
void RTC_Get_AlarmA_Current(uint8_t* message_block_internal);
uint8_t RTC_AlarmA_Period_Is_Set(uint32_t device_status);
void RTC_AlarmA_Interrupt_Disable();
void RTC_AlarmA_Interrupt_Enable();
void RTC_Write_Protection_Disable();
void RTC_Write_Protection_Enable();

extern uint8_t RTC_Alarm_Unit_Status; //BIT0: Seconds, BIT1: Minutes, BIT2: Hours
extern uint8_t RTC_Alarm_Minute_Increment;
extern uint32_t RTC_AlarmA_Period; //Sensor sampling period in seconds
extern uint8_t RTC_Alarm_Time_Minute; //Latest alarm set in minutes
extern uint8_t RTC_Alarm_Time_Seconds; //Latest alarm set in seconds

#endif /* RTC_H_ */
