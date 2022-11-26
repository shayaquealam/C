################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../array.c \
../bitwise.c \
../enum.c \
../main.c \
../pointer.c \
../structure.c \
../typedef.c 

C_DEPS += \
./array.d \
./bitwise.d \
./enum.d \
./main.d \
./pointer.d \
./structure.d \
./typedef.d 

OBJS += \
./array.o \
./bitwise.o \
./enum.o \
./main.o \
./pointer.o \
./structure.o \
./typedef.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./array.d ./array.o ./bitwise.d ./bitwise.o ./enum.d ./enum.o ./main.d ./main.o ./pointer.d ./pointer.o ./structure.d ./structure.o ./typedef.d ./typedef.o

.PHONY: clean--2e-

