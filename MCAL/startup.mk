-include ../make_config.mk

STARTUP_SRC_DIR += \
../MCAL/

STARTUP_OBJ_DIR += \
./build_artifacts/

#################  Configurations ##################################
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------

ifeq ($(TARGET_MCU), STM32F429VIT6)
MCAL_SRCS += \
./DEVICES/stm32_f429xx_startup.c \

endif

ifeq ($(TARGET_MCU), STM32F401CDU6)

STARTUP_SRCS += \
DEVICES/stm32_f401xx_startup.s \

endif

#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
STARTUP_OBJS += \
DEVICES/stm32_f401xx_startup.o \

#################  END Configurations #############################








startup_build:
	@for p in  $(STARTUP_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) $(CC_OPTIMIZATION) $(CC_ASSEMBLER_FLAGS) $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(STARTUP_OBJ_DIR)$$p.o $(STARTUP_SRC_DIR)$$p ; \
	echo "$(STARTUP_OBJ_DIR)$$p.o" >> object.list ; \
	done
	
clean: startup_clean

startup_clean: 
	$(RM)	$(STARTUP_OBJ_DIR)$(STARTUP_OBJS)


.PHONY: startup_clean

