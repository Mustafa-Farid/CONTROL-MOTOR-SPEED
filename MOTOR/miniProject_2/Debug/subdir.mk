################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../INT_1.c \
../PWM.c \
../adc.c \
../lcd.c \
../miniProject_2.c 

OBJS += \
./INT_1.o \
./PWM.o \
./adc.o \
./lcd.o \
./miniProject_2.o 

C_DEPS += \
./INT_1.d \
./PWM.d \
./adc.d \
./lcd.d \
./miniProject_2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


