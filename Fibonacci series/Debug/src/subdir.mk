################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fibonacci\ series.cpp 

OBJS += \
./src/Fibonacci\ series.o 

CPP_DEPS += \
./src/Fibonacci\ series.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fibonacci\ series.o: ../src/Fibonacci\ series.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Fibonacci series.d" -MT"src/Fibonacci\ series.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


