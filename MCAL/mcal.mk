#-----------------------------------------------
#          MCAL Source files Based on architecture 
#-----------------------------------------------

ifeq ($(TARGET_MCU), STM32F429VIT6)
MCAL_SRCS += \
./DEVICES/stm32_f429xx_startup.c \
./DEVICES/stm32_f429xx_irq.c
endif

ifeq ($(TARGET_MCU), STM32F401CDU6)
MCAL_SRCS += \
./DEVICES/stm32_f401xx_startup.c \
./DEVICES/stm32_f401xx_irq.c
endif



#-----------------------------------------------
#          MCAL object files 
#-----------------------------------------------
ifeq ( $(TARGET_MCU), STM32F429VIT6 )
OBJS += \
./build_artifacts/stm32_f429xx_startup.o \
./build_artifacts/stm32_f429xx_irq.o
endif

ifeq ($(TARGET_MCU), STM32F401CDU6)
OBJS += \
./build_artifacts/stm32_f401xx_startup.o \
./build_artifacts/stm32_f401xx_irq.o
endif





$(OBJS): $(MCAL_SRCS) ./mcal.mk
	$(CC) $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP)  "$<" -o "$@"







clean: mcal_clean

mcal_clean: 
	$(RM)	$(MCAL_OBJS)


.PHONY: mcal_clean

