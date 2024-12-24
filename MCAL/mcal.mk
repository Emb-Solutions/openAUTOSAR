-include ../make_config.mk

MCAL_SRC_DIR += \
../MCAL/

MCAL_OBJ_DIR += \
./build_artifacts/

#################  Configurations ##################################
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------

ifeq ($(TARGET_MCU), STM32F429VIT6)
MCAL_SRCS += \
./DEVICES/stm32_f429xx_irq.c

endif

ifeq ($(TARGET_MCU), STM32F401CDU6)
MCAL_SRCS += \
DEVICES/stm32_f401xx_irq.c \
DEVICES/stm32_f401cdu6_system.c

endif

#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
MCAL_OBJS += \
DEVICES/stm32_f401xx_irq.o \
DEVICES/stm32_f401cdu6_system.o

#################  END Configurations #############################








mcal_build:
	@for p in  $(MCAL_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) $(MCAL_SRC_DIR)$$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(MCAL_OBJ_DIR)$$p.o ; \
	echo "$(MCAL_OBJ_DIR)$$p.o" >> object.list ; \
	done
	
clean: mcal_clean

mcal_clean: 
	$(RM)	$(MCAL_OBJ_DIR)$(MCAL_OBJS)

.PHONY: mcal_clean

