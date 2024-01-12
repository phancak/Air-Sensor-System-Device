#include <stdint.h>
#include "Clocks.h"

void intialize_Clock_HSI16(){
	//Set Clock Registers
	RCC_CR |= (1 << 0); //HSI16 Oscillator is ON
}

void set_system_clock(){
	RCC_CFGR |= (0x01 << 0); //01: HSI16 oscillator used as system clock
}

void initialize_I2C1_Clock(){
	RCC_CCIPR &= ~(1 << 12); // Set Clock for I2C1 10:HSI16 Clock 16MHz
	RCC_CCIPR |= (1 << 13);
	RCC_APB1ENR |= (1 << 21); // Enable clock for I2C1EN
}

void initialize_GPIOA_Clock(){
	//Set clock for GPIOA
	RCC_IOPENR |= (1 << 0); //Set bit 1 to 1 PA - Enable clock for port A
}

void initialize_GPIOB_Clock(){
	//Set clock for GPIOB
	RCC_IOPENR |= (1 << 1); // Enable clock for port B
}

void initialize_LSE_Clock(){
	//All steps required
	RCC_APB1ENR |= BIT28; //PWREN: Power interface clock enable bit, 1: Power interface clock enabled
	PWR_CR |= (1 << 8); //DBP: Disable backup write protection
	RCC_CSR |= BIT19; //Bit 19 RTCRST: RTC software reset bit, 1: Resets the RTC peripheral, its clock source selection and the backup registers.
	RCC_CSR &= ~BIT19;
	RCC_CSR |= (0x03 << 11); //LSEDRV; LSE oscillator Driving capability bits, 11: Highest drive
	RCC_CSR |= BIT8; //LSEON: External low-speed oscillator enable bit, 1:LSE oscillator ON
	while ((RCC_CSR & BIT9)==0){
		//LSERDY: External low-speed oscillator ready bit, 1: External 32 kHz oscillator ready
	}
}

void initialize_LSI_Clock(){
	RCC_APB1ENR |= BIT28; //PWREN: Power interface clock enable bit, 1: Power interface clock enabled
	PWR_CR |= (1 << 8); //DBP: Disable backup write protection
	RCC_CSR |= BIT19; //Bit 19 RTCRST: RTC software reset bit, 1: Resets the RTC peripheral, its clock source selection and the backup registers.
	RCC_CSR &= ~BIT19; //Allows the LSE, LSI clock to be set
	RCC_CSR |= BIT8; //LSEON: External low-speed oscillator enable bit, 1:LSE oscillator ON
	RCC_CSR |= BIT0; //LSION: Internal low-speed oscillator enable bit, 1: LSI oscillator ON
	while ((RCC_CSR & BIT1)==0){
		//Bit 1 LSIRDY: Internal low-speed oscillator ready bit, 1: LSI oscillator ready
	}
}

void initialize_LPTIM1_Clock(){
	//Set clock for LPTIM at 32000 Hz
	RCC_APB1ENR |= (1 << 31); //LPTIM1EN: Low-power timer clock enable bit
	RCC_CCIPR |= (0x03 << 18); //Bits 19:18 LPTIM1SEL: Low-power Timer clock source selection bits, 11: LSE clock selected as LP Timer clock
}

void initialize_DMA_Clock(){
	RCC_AHBENR |= (1 << 0); //DMA clock enable bit
}

void initialize_USART2_Clock(){
	RCC_APB1ENR |= (1 << 17); // Bit 17 USART2EN: USART2 clock enable bit
	RCC_CCIPR |= (0x2 << 2); // USART2SEL: USART2 clock source selection bits 10: HSI16 clock selected as USART2 clock
}
