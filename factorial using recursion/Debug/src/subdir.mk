################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/factorial\ using\ recursion.cpp 

OBJS += \
./src/factorial\ using\ recursion.o 

CPP_DEPS += \
./src/factorial\ using\ recursion.d 


# Each subdirectory must supply rules for building sources it contributes
src/factorial\ using\ recursion.o: ../src/factorial\ using\ recursion.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/factorial using recursion.d" -MT"src/factorial\ using\ recursion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


