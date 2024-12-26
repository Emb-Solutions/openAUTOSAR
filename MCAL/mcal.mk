-include ../make_config.mk

MCAL_SRC_DIR += \
../MCAL/


#################  Configurations ##################################
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------

ifeq ($(TARGET_MCU), STM32F429VIT6)
MCAL_SRCS += \
DEVICES/stm32_f429xx_irq.c \
IO_Driver/Dio.c
endif


ifeq ($(TARGET_MCU), STM32F401CDU6)
MCAL_SRCS += \
DEVICES/stm32_f401xx_irq.c \
DEVICES/stm32_f401cdu6_system.c \
IO_Driver/DIO_Driver/Dio.c \
Microcontroller_Drivers/MCU_Driver/Mcu.c
endif

#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
MCAL_OBJS += \
DEVICES/stm32_f401xx_irq.o \
DEVICES/stm32_f401cdu6_system.o \
IO_Driver/DIO_Driver/Dio.o	\
IO_Driver/DIO_Driver/Mcu.o
#################  END Configurations #############################








mcal_build:
	@for p in  $(MCAL_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) -D$(TARGET_MCU) $(MCAL_SRC_DIR)$$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(OBJECTS_LOCATION)$$p.o ; \
	echo "$(OBJECTS_LOCATION)$$p.o" >> object.list ; \
	done
	
clean: mcal_clean

mcal_clean:

.PHONY: mcal_clean

