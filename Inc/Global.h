/*
 * Global.h
 *
 *  Created on: Dec 19, 2023
 *      Author: guest1
 */

//Includes all register pointers and global variables affecting multiple modules

#ifndef GLOBAL_H_
#define GLOBAL_H_

//Device ID registers
#define DEVICE_ID_BASE_ADDR   ((uint32_t*)0x1FF80050)
#define DEVICE_ID1		      (*(0x000UL/4+DEVICE_ID_BASE_ADDR))
#define DEVICE_ID2		      (*(0x004UL/4+DEVICE_ID_BASE_ADDR))
#define DEVICE_ID3		      (*(0x014UL/4+DEVICE_ID_BASE_ADDR))

//Control registers
#define SCB_BASE_ADDR   0xE000ED00
#define SCB_ICSR        (*(volatile uint32_t*)(SCB_BASE_ADDR + 0x04))

//Power Control Registers
#define PWR_BASE        (uint32_t*)0X40007000
#define PWR_CR          (*(0x00UL/4 + PWR_BASE))   //PWR power control register

//Extended interrupt and event controller (EXTI) Registers
#define EXTI_BASE         (uint32_t*)0X40010400
#define EXTI_IMR          (*(0x00UL/4 + EXTI_BASE))   //EXTI interrupt mask register
#define EXTI_EMR          (*(0x04UL/4 + EXTI_BASE))   //EXTI event mask register
#define EXTI_RTSR         (*(0x08UL/4 + EXTI_BASE))   //EXTI rising edge trigger selection register
#define EXTI_FTSR         (*(0x0CUL/4 + EXTI_BASE))   //Falling edge trigger selection register
#define EXTI_SWIER        (*(0x10UL/4 + EXTI_BASE))   //EXTI software interrupt event register
#define EXTI_PR           (*(0x14UL/4 + EXTI_BASE))   //EXTI pending register

//NVIC registers
#define NVIC_ISER       (*(uint32_t*)0xE000E100UL)   // Interrupt set-enable register.
#define NVIC_ICER       (*(uint32_t*)0xE000E180UL)   // Interrupt clear-enable register.
#define NVIC_ISPR       (*(uint32_t*)0xE000E200UL)   // Interrupt set-pending register.
#define NVIC_ICPR       (*(uint32_t*)0xE000E280UL)   // Interrupt clear-pending register.
#define NVIC_IPR0       (*(uint32_t*)0xE000E400UL)   // Interrupt priority registers.
#define NVIC_IPR1       (*(uint32_t*)0xE000E404UL)   // Interrupt priority registers.
#define NVIC_IPR2       (*(uint32_t*)0xE000E408UL)   // Interrupt priority registers.
#define NVIC_IPR3       (*(uint32_t*)0xE000E40CUL)   // Interrupt priority registers.
#define NVIC_IPR4       (*(uint32_t*)0xE000E410UL)   // Interrupt priority registers.
#define NVIC_IPR5       (*(uint32_t*)0xE000E414UL)   // Interrupt priority registers.
#define NVIC_IPR6       (*(uint32_t*)0xE000E418UL)   // Interrupt priority registers.
#define NVIC_IPR7       (*(uint32_t*)0xE000E41CUL)   // Interrupt priority registers.

//LPTIM1 Registers (Low Power Timer)
#define LPTIM1_BASE        (uint32_t*)0X40007C00
#define LPTIM_ISR		   (*(0x000UL/4+LPTIM1_BASE))
#define LPTIM_ICR		   (*(0x004UL/4+LPTIM1_BASE))
#define LPTIM_IER		   (*(0x008UL/4+LPTIM1_BASE)) //The LPTIM_IER register must only be modified when the LPTIM is disabled (ENABLE bit reset to ‘0’)
#define LPTIM_CFGR		   (*(0x00CUL/4+LPTIM1_BASE)) //The LPTIM_CFGR register must only be modified when the LPTIM is disabled (ENABLE bit reset to ‘0’).
#define LPTIM_CR		   (*(0x010UL/4+LPTIM1_BASE))
#define LPTIM_CMP		   (*(0x014UL/4+LPTIM1_BASE)) //The LPTIM_CMP register must only be modified when the LPTIM is enabled (ENABLE bit set to ‘1’).
#define LPTIM_ARR		   (*(0x018UL/4+LPTIM1_BASE)) //The LPTIM_ARR register must only be modified when the LPTIM is enabled (ENABLE bit set to ‘1’).
#define LPTIM_CNT		   (*(0x01CUL/4+LPTIM1_BASE))

//Clock Configuration Registers
#define RCC_BASE        (uint32_t*)0x40021000
#define RCC_IOPENR      (*(0x2CUL/4 + RCC_BASE))   // GPIO clock enable register
#define RCC_CFGR        (*(0x0CUL/4 + RCC_BASE))   // Clock configuration register - SYSCLK
#define RCC_CCIPR       (*(0x4CUL/4 + RCC_BASE))   // Clock configuration register
#define RCC_APB1ENR     (*(0x38UL/4 + RCC_BASE))   // APB1 peripheral clock enable register
#define RCC_CR          (*(0x00UL/4 + RCC_BASE))   // Clock control register
#define RCC_CIFR        (*(0x14UL/4 + RCC_BASE))   // Clock Interrupt flag register
#define RCC_AHBENR      (*(0x30UL/4 + RCC_BASE))   // AHB peripheral clock enable register
#define RCC_APB2ENR     (*(0x34UL/4 + RCC_BASE))   // APB2 peripheral clock enable register ADC
#define RCC_APB1ENR     (*(0x38UL/4 + RCC_BASE))   // APB1 peripheral clock enable register
#define RCC_APB1SMENR   (*(0x48UL/4 + RCC_BASE))
#define RCC_CSR         (*(0x50UL/4 + RCC_BASE))   // Control/status register

//GPIOA Registers
#define GPIOA_BASE      (uint32_t*)0x50000000UL      // GPIOA memory start
#define GPIOA_MODER     (*(0x00UL/4 + GPIOA_BASE))   // GPIO mode
#define GPIOA_OSPEEDR   (*(0x08UL/4 + GPIOA_BASE))   // GPIO mode
#define GPIOA_OTYPER    (*(0x04UL/4 + GPIOA_BASE))   // GPIO output type - Reset value all zero
#define GPIOA_PUPDR     (*(0x0CUL/4 + GPIOA_BASE))   // GPIO port pull-up/pull-down register
#define GPIOA_ODR       (*(0x14UL/4 + GPIOA_BASE))   // GPIO port output data register
#define GPIOA_IDR       (*(0x10UL/4 + GPIOA_BASE))   // Input data register
#define GPIOA_BSRR      (*(0x18UL/4 + GPIOA_BASE))   // Port bit set/reset register
#define GPIOA_LCKR      (*(0x1CUL/4 + GPIOA_BASE))   // Port configuration lock register
#define GPIOA_AFRL      (*(0x20UL/4 + GPIOA_BASE))   // Alternate function low register
#define GPIOA_AFRH      (*(0x24UL/4 + GPIOA_BASE))   // Alternate function high register

// GPIOB Registers
#define GPIOB_BASE      (uint32_t*)0x50000400UL      // GPIOB memory start
#define GPIOB_MODER     (*(0x00UL/4 + GPIOB_BASE))   // GPIO mode
#define GPIOB_OSPEEDR   (*(0x08UL/4 + GPIOB_BASE))   // GPIO output speed
#define GPIOB_OTYPER    (*(0x04UL/4 + GPIOB_BASE))   // GPIO output type
#define GPIOB_PUPDR     (*(0x0CUL/4 + GPIOB_BASE))   // GPIO pull-up/pull-down register
#define GPIOB_ODR       (*(0x14UL/4 + GPIOB_BASE))   // GPIO output data register
#define GPIOB_IDR       (*(0x10UL/4 + GPIOB_BASE))   // Input data register
#define GPIOB_BSRR      (*(0x18UL/4 + GPIOB_BASE))   // Port bit set/reset register
#define GPIOB_LCKR      (*(0x1CUL/4 + GPIOB_BASE))   // Port configuration lock register
#define GPIOB_AFRL      (*(0x20UL/4 + GPIOB_BASE))   // Alternate function low register
#define GPIOB_AFRH      (*(0x24UL/4 + GPIOB_BASE))   // Alternate function high register

// I2C1 Registers
#define I2C1_BASE               (uint32_t*)0x40005400UL // I2C1 base address
#define I2C1_CR1                (*(0x00UL/4 + I2C1_BASE))   // I2C control register 1
#define I2C1_CR2                (*(0x04UL/4 + I2C1_BASE))   // I2C control register 2
#define I2C1_OAR1               (*(0x08UL/4 + I2C1_BASE))   // I2C own address 1 register
#define I2C1_OAR2               (*(0x0CUL/4 + I2C1_BASE))   // I2C own address 2 register
#define I2C1_TIMINGR            (*(0x10UL/4 + I2C1_BASE))   // I2C timing register
#define I2C1_TIMEOUTR           (*(0x14UL/4 + I2C1_BASE))   // I2C timeout register
#define I2C1_ISR                (*(0x18UL/4 + I2C1_BASE))   // I2C interrupt and status register
#define I2C1_ICR                (*(0x1CUL/4 + I2C1_BASE))   // I2C interrupt clear register
#define I2C1_PECR               (*(0x20UL/4 + I2C1_BASE))   // I2C PEC register
#define I2C1_RXDR               (*(0x24UL/4 + I2C1_BASE))   // I2C receive data register
#define I2C1_TXDR               (*(0x28UL/4 + I2C1_BASE))   // I2C transmit data register

//USART Registers
#define USART_BASE		(uint32_t*)0X40004400UL
#define USART_CR1		(*(0x00UL/4 + USART_BASE)) //USART control register 1
#define USART_CR2		(*(0x04UL/4 + USART_BASE)) //USART control register 2
#define USART_CR3		(*(0x08UL/4 + USART_BASE)) //USART control register 3
#define USART_BRR		(*(0x0CUL/4 + USART_BASE)) //USART baud rate register
#define USART_GTPR		(*(0x10UL/4 + USART_BASE)) //USART guard time and prescaler register
#define USART_RTOR		(*(0x14UL/4 + USART_BASE)) //USART receiver timeout register
#define USART_RQR		(*(0x18UL/4 + USART_BASE)) //USART request register
#define USART_ISR		(*(0x1CUL/4 + USART_BASE)) //USART interrupt and status register
#define USART_ICR		(*(0x20UL/4 + USART_BASE)) //USART interrupt flag clear register
#define USART_RDR		(*(0x24UL/4 + USART_BASE)) //USART receive data register
#define USART_TDR		(*(0x28UL/4 + USART_BASE)) //USART transmit data register

// DMA Registers
#define DMA_BASE        ((uint32_t*)0x40020000UL)
#define DMA_CSELR       (*(DMA_BASE + 0xA8UL/4))    // DMA channel selection register
#define DMA_IFCR        (*(DMA_BASE + 0x04UL/4)) 	// DMA interrupt flag clear register
#define DMA_CPAR4       (*(DMA_BASE + (0x10UL + 0x14UL*(4-1))/4))    // DMA channel x peripheral address register
#define DMA_CPAR5       (*(DMA_BASE + (0x10UL + 0x14UL*(5-1))/4))  // DMA channel x peripheral address register
#define DMA_CMAR4       (*(DMA_BASE + (0x14UL + 0x14UL*(4-1))/4))    // DMA channel x memory address register
#define DMA_CMAR5       (*(DMA_BASE + (0x14UL + 0x14UL*(5-1))/4))  // DMA channel x memory address register
#define DMA_CNDTR4      (*(DMA_BASE + (0x0CUL + 0x14UL*(4-1))/4))   // DMA channel x number of data register
#define DMA_CNDTR5      (*(DMA_BASE + (0x0CUL + 0x14UL*(5-1))/4)) // DMA channel x number of data register
#define DMA_CCR4        (*(DMA_BASE + (0x08UL + 0x14UL*(4-1))/4))   // DMA channel x configuration register
#define DMA_CCR5        (*(DMA_BASE + (0x08UL + 0x14UL*(5-1))/4)) // DMA channel x configuration register
#define DMA_CPAR1       (*(DMA_BASE + (0x10UL + 0x14UL*(1-1))/4))    // DMA channel x peripheral address register
#define DMA_CMAR1       (*(DMA_BASE + (0x14UL + 0x14UL*(1-1))/4))    // DMA channel x memory address register
#define DMA_CNDTR1      (*(DMA_BASE + (0x0CUL + 0x14UL*(1-1))/4))    // DMA channel x number of data register
#define DMA_CCR1        (*(DMA_BASE + (0x08UL + 0x14UL*(1-1))/4))    // DMA channel x configuration register
#define DMA_ISR         (*(DMA_BASE + 0x00UL))             // DMA interrupt status register

//Real Time Clock Configuration Registers
#define RTC_BASE        (uint32_t*)0X40002800
#define RTC_TR          (*(0x00UL/4 + RTC_BASE))	//RTC time register
#define RTC_DR          (*(0x04UL/4 + RTC_BASE))	//RTC date register
#define RTC_CR          (*(0x08UL/4 + RTC_BASE))	//RTC control register
#define RTC_ISR         (*(0x0CUL/4 + RTC_BASE))	//RTC initialization and status register
#define RTC_PRER        (*(0x10UL/4 + RTC_BASE))	//RTC prescaler register
#define RTC_WUTR        (*(0x14UL/4 + RTC_BASE))	//RTC wakeup timer register
#define RTC_ALRMAR      (*(0x1CUL/4 + RTC_BASE))	//RTC alarm A register
#define RTC_ALRMBR      (*(0x20UL/4 + RTC_BASE))	//RTC alarm B register
#define RTC_WPR         (*(0x24UL/4 + RTC_BASE))	//RTC write protection register
#define RTC_SSR         (*(0x28UL/4 + RTC_BASE))	//RTC sub second register
#define RTC_SHIFTR      (*(0x2CUL/4 + RTC_BASE))	//RTC shift control register
#define RTC_TSTR        (*(0x30UL/4 + RTC_BASE))	//RTC timestamp time register
#define RTC_TSDR        (*(0x34UL/4 + RTC_BASE))	//RTC timestamp date register
#define RTC_TSSSR       (*(0x38UL/4 + RTC_BASE))	//RTC time-stamp sub second register
#define RTC_CALR        (*(0x3CUL/4 + RTC_BASE))	//RTC calibration register
#define RTC_TAMPCR      (*(0x40UL/4 + RTC_BASE))	//RTC tamper configuration register
#define RTC_ALRMASSR    (*(0x44UL/4 + RTC_BASE))	//RTC alarm A sub second register
#define RTC_ALRMBSSR    (*(0x48UL/4 + RTC_BASE))	//RTC alarm B sub second register
#define RTC_OR          (*(0x4CUL/4 + RTC_BASE))	//RTC option register
#define RTC_BKP0R       (*(0x50UL/4 + RTC_BASE))	//RTC backup registers
#define RTC_BKP4R       (*(0x54UL/4 + RTC_BASE))	//RTC backup registers

#define BIT(N) ((uint32_t)(1U << (N)))
#define BIT0  BIT(0)
#define BIT1  BIT(1)
#define BIT2  BIT(2)
#define BIT3  BIT(3)
#define BIT4  BIT(4)
#define BIT5  BIT(5)
#define BIT6  BIT(6)
#define BIT7  BIT(7)
#define BIT8  BIT(8)
#define BIT9  BIT(9)
#define BIT10 BIT(10)
#define BIT11 BIT(11)
#define BIT12 BIT(12)
#define BIT13 BIT(13)
#define BIT14 BIT(14)
#define BIT15 BIT(15)
#define BIT16 BIT(16)
#define BIT17 BIT(17)
#define BIT18 BIT(18)
#define BIT19 BIT(19)
#define BIT20 BIT(20)
#define BIT21 BIT(21)
#define BIT22 BIT(22)
#define BIT23 BIT(23)
#define BIT24 BIT(24)
#define BIT25 BIT(25)
#define BIT26 BIT(26)
#define BIT27 BIT(27)
#define BIT28 BIT(28)
#define BIT29 BIT(29)
#define BIT30 BIT(30)
#define BIT31 BIT(31)

/*
 * Sensor Message composition
 * BYTE0 - Message label (determines the type of message and how it is to be processed)
 * BYTE1 to BYTE8 - Time (RTC_TR) and Date (RTC_DR)
 * BYTE9 to BYTE12 - RH and Temperature Sensor data
 * BYTE13 - Specifies if the message came from EEPROM (Stored message)
 */

//Sensors Data Constants
#define SENSORS_MAX_GET_DATA_TRIES			((uint8_t)10) //Will try to get data a number of times from the sensor if unsuccessful

//Size of the data block gained from sensors in bytes (uint8_t)
#define DATA_BLOCK_BYTES				 ((uint8_t)13) //4x time, 4x date, 2x temperature,2x humidity
#define MESSAGE_BLOCK_BYTES				 (uint8_t)(DATA_BLOCK_BYTES + 1) //One byte for the message type

//Global Message queue
#define GLOBAL_MESSAGE_QUEUE_DATA_BLOCKS  ((uint16_t)20) //Global message queue message data block capacity
#define GLOBAL_MESSAGE_QUEUE_SIZE         ((uint16_t)(GLOBAL_MESSAGE_QUEUE_DATA_BLOCKS*MESSAGE_BLOCK_BYTES))

//Sensor message queue
#define SENSOR_MESSAGE_QUEUE_DATA_BLOCKS  ((uint16_t)20) //Sensor message queue message data block capacity
#define SENSOR_MESSAGE_QUEUE_SIZE         ((uint16_t)(SENSOR_MESSAGE_QUEUE_DATA_BLOCKS*MESSAGE_BLOCK_BYTES))

//Server message queue
#define SERVER_MESSAGE_QUEUE_DATA_BLOCKS  ((uint16_t)20) //Server message queue message data block capacity
#define SERVER_MESSAGE_QUEUE_SIZE         ((uint16_t)(SERVER_MESSAGE_QUEUE_DATA_BLOCKS*MESSAGE_BLOCK_BYTES))

//Sensor message queue
#define INTERNAL_MESSAGE_QUEUE_DATA_BLOCKS  ((uint16_t)20) //Server message queue message data block capacity
#define INTERNAL_MESSAGE_QUEUE_SIZE         ((uint16_t)(INTERNAL_MESSAGE_QUEUE_DATA_BLOCKS*MESSAGE_BLOCK_BYTES))

//EEPROM message queue
#define EEPROM_READ_MESSAGE_QUEUE_DATA_BLOCKS  ((uint16_t)20) //Server message queue message data block capacity
#define EEPROM_READ_MESSAGE_QUEUE_SIZE         ((uint16_t)(EEPROM_READ_MESSAGE_QUEUE_DATA_BLOCKS*MESSAGE_BLOCK_BYTES))

//Global message queue parameters
extern uint8_t global_message_queue[GLOBAL_MESSAGE_QUEUE_SIZE];
extern uint8_t global_msg_queue_processing_index; //Tracks the position of incoming messages to be processed
extern uint8_t global_msg_queue_storage_index; //Tracks index where incoming messages are to be stored
extern uint8_t global_msg_queue_full_flag;

//Sensor message queue parameters
extern uint8_t sensor_message_queue[SENSOR_MESSAGE_QUEUE_SIZE];
extern uint8_t sensor_msg_queue_processing_index; //Tracks the position of incoming messages to be processed
extern uint8_t sensor_msg_queue_storage_index; //Tracks index where incoming messages are to be stored
extern uint8_t sensor_msg_queue_full_flag;

//Server message queue parameters
extern uint8_t server_message_queue[SERVER_MESSAGE_QUEUE_SIZE];
extern uint8_t server_msg_queue_processing_index; //Tracks the position of incoming messages to be processed
extern uint8_t server_msg_queue_storage_index; //Tracks index where incoming messages are to be stored
extern uint8_t server_msg_queue_full_flag;

//Internal message queue parameters
extern uint8_t internal_message_queue[INTERNAL_MESSAGE_QUEUE_SIZE];
extern uint8_t internal_msg_queue_processing_index; //Tracks the position of incoming messages to be processed
extern uint8_t internal_msg_queue_storage_index; //Tracks index where incoming messages are to be stored
extern uint8_t internal_msg_queue_full_flag;

//Read from EEPROM queue parameters (Read data from EEPROM will arrive asynchronously)
extern uint8_t EEPROM_read_message_queue[EEPROM_READ_MESSAGE_QUEUE_SIZE];
extern uint8_t EEPROM_read_msg_queue_processing_index; //Tracks the position of incoming messages to be processed
extern uint8_t EEPROM_read_msg_queue_storage_index; //Tracks index where incoming messages are to be stored
extern uint8_t EEPROM_read_msg_queue_full_flag;

//Device Status
extern uint32_t device_status; //Contains device status bits

//Sensor Data inside a message (ready to be placed on message queue)
extern uint8_t message_block_sensor[MESSAGE_BLOCK_BYTES]; //Sensor data, time 4x uint8_t, date 4x uint8_t, temperature 2x uint8_t, humidity 2x uint8_t
extern uint8_t message_block_internal[MESSAGE_BLOCK_BYTES];
extern uint8_t message_block_EEPROM_read[MESSAGE_BLOCK_BYTES];
extern uint16_t RH_data;
extern uint16_t temperature_data;

/*
 * Device Status Bit Description
 * BIT0 - AM2302 Counter timed out
 * BIT1 - AM2302 Check_sum failed
 * BIT2 - Global message queue full
 * BIT3 - Sensor message queue full
 * BIT4 - Server message queue full
 * BIT5 - Internal message queue full
 * BIT6 - Alarm A Period Set (1: Period has been set, 0: Period has not been set - Device cannot start sampling)
 * BIT7 - Date and Time set
 * BIT8 - Unknown message detected
 * BIT9 - EEPROM read message queue full
 */

void RTC_IRQHandler();
void PendSV_Handler();
void LPTIM1_IRQHandler(); //-------Maybe remove
void Get_Data_From_Sensors(uint8_t* message);

//Queues
void global_message_queue_combine();
uint8_t global_message_queue_is_empty();
uint8_t sensor_message_queue_is_empty();
uint8_t server_message_queue_is_empty();
uint8_t internal_message_queue_is_empty();
uint8_t EEPROM_read_message_queue_is_empty();
uint8_t* global_message_queue_get();
uint8_t* sensor_message_queue_get();
uint8_t* server_message_queue_get();
uint8_t* internal_message_queue_get();
uint8_t* EEPROM_read_message_queue_get();
void global_message_queue_add(uint8_t* message);
void sensor_message_queue_add(uint8_t* message);
void server_message_queue_add(uint8_t* message);
void internal_message_queue_add(uint8_t* message);
void EEPROM_read_message_queue_add(uint8_t* message);
void Process_Global_Message_Queue();
void label_message_type(uint8_t byteNumber, uint8_t label, uint8_t* message);
void get_mcu_serial(uint8_t* target);

#endif /* GLOBAL_H_ */
