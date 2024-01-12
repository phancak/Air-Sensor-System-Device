/*
 * I2C_EEPROM.h
 *
 *  Created on: Dec 19, 2023
 *      Author: guest1
 */

#ifndef I2C_EEPROM_H_
#define I2C_EEPROM_H_

#include "Global.h"

//I2C CONSTANTS
#define I2C_MAX_EEPROM_WRITE_ATTEMPTS	10
#define I2C_MAX_EEPROM_READ_ATTEMPTS	10
#define EEPROM_PAGE_SIZE	61 //Max number of bytes to be written to EEPROM in one go

//EEPROM Addresses - Not treated as pointers here (only transmitted data)
#define EEPROM_DATA_BLOCK_PROCESS_POINTER      ((uint16_t)0x0000) //Pointer on EEPROM up to which data have been processed (Transfered to server)
#define EEPROM_DATA_BLOCK_WRITE_POINTER        ((uint16_t)0x0002) //Next data block write pointer
#define EEPROM_INITIAL_DATA_WRITE_POINTER	   ((uint16_t)0x0004) //EEPROM pointer where data blocks will be written
#define EEPROM_MANUFACTURER_CODE			   ((uint16_t)0x7FFA) //Should be 0x29
#define EEPROM_DEVICE_IDENTIFIER			   ((uint16_t)0x7FFB) //the device identifier is 0x48. The ‘4’ indicates the I2C family and the ‘8’ indicates a 256 Kbit memory density
#define EEPROM_SERIAL_NUMBER			       ((uint16_t)0x7FFC) //32-bit serial number
#define EEPROM_CHIP1_ADDRESS				   ((uint8_t)0x01) //Address of the EEPROM chip used by I2C to address it
#define EEPROM_CHIP2_ADDRESS				   ((uint8_t)0x02) //Address of the EEPROM chip used by I2C to address it

void intialize_GPIO_I2C1(); //PB6, PB7, PA5, PA6
void initialize_I2C1();
void I2C1_IRQHandler(); //Function prototype
void EEPROM_Reset_Data_Pointers(uint8_t I2C_address);
void EEPROM_Get_Data_Write_Pointer(uint8_t I2C_address);
void EEPROM_Get_Data_Process_Pointer(uint8_t I2C_address);
void EEPROM_Increment_Data_Write_Pointer(uint8_t I2C_address, uint16_t incrementSize);
void EEPROM_Increment_Data_Process_Pointer(uint8_t I2C_address, uint16_t incrementSize);
void EEPROM_Store_Data_Block(uint8_t I2C_address);
uint8_t EEPROM_Get_FIFO_Data_Block(uint8_t I2C_address);
void I2C_EEPROM_Read(uint8_t I2C_address, uint16_t EEPROM_address, uint8_t nBytes);
void I2C_EEPROM_Write(uint8_t I2C_address, uint16_t EEPROM_address, uint8_t nBytes, uint8_t generateStop);
uint8_t EEPROM_Stored_Data_Block_Is_Available(uint8_t I2C_address);
void EEPROM_Get_Serial_Number(uint8_t I2C_address);

extern uint8_t EEPROM_send_data[MESSAGE_BLOCK_BYTES]; //Data to be sent (page size plus address). The first two bytes of EEPROM_send_data reserved for EEPROM_address
extern uint8_t EEPROM_received_data[MESSAGE_BLOCK_BYTES]; //Data received
extern uint16_t EEPROM_Transmitted_address[2]; //Two byte EEPROM address to be sent before data
extern uint8_t send_byte_counter;
extern uint8_t receive_byte_counter; //Tracks position in the receive array
extern uint8_t i2c_busy;
extern uint8_t i2c_write_successful_flag;
extern uint8_t i2c_read_successful_flag;
extern uint8_t no_of_write_attempts;
extern uint16_t EEPROM_Data_Write_Address;
extern uint16_t EEPROM_Data_Process_Address;

#endif /* I2C_EEPROM_H_ */
