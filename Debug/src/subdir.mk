################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/stm32f4xx_it.c \
../src/syscalls.c \
../src/system_stm32f4xx.c 

OBJS += \
./src/main.o \
./src/stm32f4xx_it.o \
./src/syscalls.o \
./src/system_stm32f4xx.o 

C_DEPS += \
./src/main.d \
./src/stm32f4xx_it.d \
./src/syscalls.d \
./src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F4 -DSTM32 -DNUCLEO_F411RE -DSTM32F411RETx -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib" -I"E:/!TI/testes_TI/TI_2017/inc" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/CMSIS/core" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/CMSIS/device" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/HAL_Driver/Inc/Legacy" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/HAL_Driver/Inc" -I"E:/!TI/testes_TI/nucleo-f411re_hal_lib/Utilities/STM32F4xx-Nucleo" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


