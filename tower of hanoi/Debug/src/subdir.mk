################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/tower\ of\ hanoi.cpp 

OBJS += \
./src/tower\ of\ hanoi.o 

CPP_DEPS += \
./src/tower\ of\ hanoi.d 


# Each subdirectory must supply rules for building sources it contributes
src/tower\ of\ hanoi.o: ../src/tower\ of\ hanoi.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/tower of hanoi.d" -MT"src/tower\ of\ hanoi.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


