################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/indirect\ recursion.cpp 

OBJS += \
./src/indirect\ recursion.o 

CPP_DEPS += \
./src/indirect\ recursion.d 


# Each subdirectory must supply rules for building sources it contributes
src/indirect\ recursion.o: ../src/indirect\ recursion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/indirect recursion.d" -MT"src/indirect\ recursion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


