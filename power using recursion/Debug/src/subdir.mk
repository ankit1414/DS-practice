################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/power\ using\ recursion.cpp 

OBJS += \
./src/power\ using\ recursion.o 

CPP_DEPS += \
./src/power\ using\ recursion.d 


# Each subdirectory must supply rules for building sources it contributes
src/power\ using\ recursion.o: ../src/power\ using\ recursion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/power using recursion.d" -MT"src/power\ using\ recursion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


