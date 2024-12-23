-include ../make_config.mk
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------
MCAL_SRC_DIR += \
../MCAL/
MCAL_OBJ_DIR += \
./build_artifacts/

# ifeq ($(TARGET_MCU), STM32F429VIT6)
# MCAL_SRCS += \
# ./DEVICES/stm32_f429xx_startup.c \
# ./DEVICES/stm32_f429xx_irq.c
# endif

# ifeq ($(TARGET_MCU), STM32F401CDU6)
MCAL_SRCS += \
DEVICES/stm32_f401xx_irq.c \
DEVICES/stm32_f401xx_startup.c \



# endif

#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
MCAL_OBJS += \
DEVICES/stm32_f401xx_irq.o \
DEVICES/stm32_f401xx_startup.o \




mcal_build:
	@for p in  $(MCAL_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) $(MCAL_SRC_DIR)$$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(MCAL_OBJ_DIR)$$p.o ; \
	done
	



clean: mcal_clean

mcal_clean: 
	$(RM)	$(MCAL_OBJ_DIR)$(MCAL_OBJS)


.PHONY: mcal_clean

