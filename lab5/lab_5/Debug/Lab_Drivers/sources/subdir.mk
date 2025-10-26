################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lab_Drivers/sources/GPIO.c \
../Lab_Drivers/sources/Keypad.c 

OBJS += \
./Lab_Drivers/sources/GPIO.o \
./Lab_Drivers/sources/Keypad.o 

C_DEPS += \
./Lab_Drivers/sources/GPIO.d \
./Lab_Drivers/sources/Keypad.d 


# Each subdirectory must supply rules for building sources it contributes
Lab_Drivers/sources/%.o: ../Lab_Drivers/sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F401CCUx -DDEBUG -DSTM32F401xx -DUSE_STDPERIPH_DRIVER -I"D:/Mohamed/Third_Year/Second_Term/Digital Systems in Medical Devices/labs projects/lab5/lab_5/Lab_Drivers/includes" -I"D:/Mohamed/Third_Year/Second_Term/Digital Systems in Medical Devices/labs projects/lab5/lab_5/StdPeriph_Driver/inc" -I"D:/Mohamed/Third_Year/Second_Term/Digital Systems in Medical Devices/labs projects/lab5/lab_5/inc" -I"D:/Mohamed/Third_Year/Second_Term/Digital Systems in Medical Devices/labs projects/lab5/lab_5/CMSIS/device" -I"D:/Mohamed/Third_Year/Second_Term/Digital Systems in Medical Devices/labs projects/lab5/lab_5/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


