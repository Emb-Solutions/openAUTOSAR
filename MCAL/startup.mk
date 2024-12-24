-include ../make_config.mk
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------
STARTUP_SRC_DIR += \
../MCAL/

STARTUP_OBJ_DIR += \
./build_artifacts/

# ifeq ($(TARGET_MCU), STM32F429VIT6)
# MCAL_SRCS += \
# ./DEVICES/stm32_f429xx_startup.c \
# ./DEVICES/stm32_f429xx_irq.c
# endif

# ifeq ($(TARGET_MCU), STM32F401CDU6)

STARTUP_SRCS += \
DEVICES/stm32_f401xx_startup.s \

# endif

#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
STARTUP_OBJS += \
DEVICES/stm32_f401xx_startup.o \




startup_build:
	@for p in  $(STARTUP_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) $(CC_OPTIMIZATION) $(CC_ASSEMBLER_FLAGS) $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(STARTUP_OBJ_DIR)$$p.o $(STARTUP_SRC_DIR)$$p ; \
	done
	



clean: startup_clean

startup_clean: 
	$(RM)	$(STARTUP_OBJ_DIR)$(STARTUP_OBJS)


.PHONY: startup_clean

