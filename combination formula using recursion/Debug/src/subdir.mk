################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/combination\ formula\ using\ recursion.cpp 

OBJS += \
./src/combination\ formula\ using\ recursion.o 

CPP_DEPS += \
./src/combination\ formula\ using\ recursion.d 


# Each subdirectory must supply rules for building sources it contributes
src/combination\ formula\ using\ recursion.o: ../src/combination\ formula\ using\ recursion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/combination formula using recursion.d" -MT"src/combination\ formula\ using\ recursion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


