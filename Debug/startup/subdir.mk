################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32f411xe.s 

OBJS += \
./startup/startup_stm32f411xe.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib" -I"E:/!TI/testes_TI/TI_2017/inc" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/CMSIS/core" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/CMSIS/device" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/HAL_Driver/Inc/Legacy" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/HAL_Driver/Inc" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/Utilities/STM32F4xx-Nucleo" -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


