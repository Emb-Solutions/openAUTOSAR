-include ../make_config.mk
#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------

# ifeq ($(TARGET_MCU), STM32F429VIT6)
# MCAL_SRCS += \
# ./DEVICES/stm32_f429xx_startup.c \
# ./DEVICES/stm32_f429xx_irq.c
# endif

# ifeq ($(TARGET_MCU), STM32F401CDU6)
MCAL_SRCS += \
../MCAL/DEVICES/stm32_f401xx_irq.c \
../MCAL/DEVICES/stm32_f401xx_startup.c \

# endif



#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
MCAL_OBJS += \
./build_artifacts/stm32_f401xx_irq.o \
./build_artifacts/stm32_f401xx_startup.o \

mcal_build: $(MCAL_OBJS)
# 	@for p in  $(MCAL_SRCS); y in $(MCAL_OBJS); \
#     do \
# 	echo ; \
# 	echo Compiling ... $$p ; \
# 	echo ; \
# 	$(CC) $$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP)   -o  ; \
#     done
	

$(MCAL_OBJS): $(MCAL_SRCS)
	@echo 'Compiling... $<'
	$(CC) $< $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP)   -o $@
	@echo ''




clean: mcal_clean

mcal_clean: 
	$(RM)	$(MCAL_OBJS)


.PHONY: mcal_clean

