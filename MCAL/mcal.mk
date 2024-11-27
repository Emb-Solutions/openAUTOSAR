
-include ../build/make_config.mk

.PHONY: device_sources_build



#-----------------------------------------------
#          MCAL Source files
#-----------------------------------------------

MCAL_SRCS += \
./DEVICES/stm32_f429xx_startup.c \
./DEVICES/stm32_f429xx_irq.c


#-----------------------------------------------
#          MCAL object files
#-----------------------------------------------
MCAL_OBJS += \
../build_artifacts/stm32_f429xx_startup.o \
../build_artifacts/stm32_f429xx_irq.o

device_sources_build: $(MCAL_OBJS)
	@echo 'Finished Building!'



$(MCAL_OBJS): $(MCAL_SRCS) ./mcal.mk
	$(CC) "$<" -o "$@"








