################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HALL/HDIO_program.c 

OBJS += \
./HALL/HDIO_program.o 

C_DEPS += \
./HALL/HDIO_program.d 


# Each subdirectory must supply rules for building sources it contributes
HALL/%.o: ../HALL/%.c HALL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\Embedded Automotive\NTI\AVR Atmega32\1.MCAL\DIO\0.LIB" -I"E:\Embedded Automotive\NTI\AVR Atmega32\1.MCAL\DIO\APP" -I"E:\Embedded Automotive\NTI\AVR Atmega32\1.MCAL\DIO\HALL" -I"E:\Embedded Automotive\NTI\AVR Atmega32\1.MCAL\DIO\MCAL" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


