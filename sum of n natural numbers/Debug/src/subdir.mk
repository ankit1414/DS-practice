################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/sum\ of\ n\ natural\ numbers.cpp 

OBJS += \
./src/sum\ of\ n\ natural\ numbers.o 

CPP_DEPS += \
./src/sum\ of\ n\ natural\ numbers.d 


# Each subdirectory must supply rules for building sources it contributes
src/sum\ of\ n\ natural\ numbers.o: ../src/sum\ of\ n\ natural\ numbers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sum of n natural numbers.d" -MT"src/sum\ of\ n\ natural\ numbers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


