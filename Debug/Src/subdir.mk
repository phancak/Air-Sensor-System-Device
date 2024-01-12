################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/AM2302.c \
../Src/Clocks.c \
../Src/GPIO.c \
../Src/I2C_EEPROM.c \
../Src/LPTIM.c \
../Src/NVIC.c \
../Src/Queues.c \
../Src/RTC.c \
../Src/USART_DMA.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/AM2302.o \
./Src/Clocks.o \
./Src/GPIO.o \
./Src/I2C_EEPROM.o \
./Src/LPTIM.o \
./Src/NVIC.o \
./Src/Queues.o \
./Src/RTC.o \
./Src/USART_DMA.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/AM2302.d \
./Src/Clocks.d \
./Src/GPIO.d \
./Src/I2C_EEPROM.d \
./Src/LPTIM.d \
./Src/NVIC.d \
./Src/Queues.d \
./Src/RTC.d \
./Src/USART_DMA.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DSTM32L031K6Tx -DSTM32 -DNUCLEO_L031K6 -DSTM32L0 -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/AM2302.cyclo ./Src/AM2302.d ./Src/AM2302.o ./Src/AM2302.su ./Src/Clocks.cyclo ./Src/Clocks.d ./Src/Clocks.o ./Src/Clocks.su ./Src/GPIO.cyclo ./Src/GPIO.d ./Src/GPIO.o ./Src/GPIO.su ./Src/I2C_EEPROM.cyclo ./Src/I2C_EEPROM.d ./Src/I2C_EEPROM.o ./Src/I2C_EEPROM.su ./Src/LPTIM.cyclo ./Src/LPTIM.d ./Src/LPTIM.o ./Src/LPTIM.su ./Src/NVIC.cyclo ./Src/NVIC.d ./Src/NVIC.o ./Src/NVIC.su ./Src/Queues.cyclo ./Src/Queues.d ./Src/Queues.o ./Src/Queues.su ./Src/RTC.cyclo ./Src/RTC.d ./Src/RTC.o ./Src/RTC.su ./Src/USART_DMA.cyclo ./Src/USART_DMA.d ./Src/USART_DMA.o ./Src/USART_DMA.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

