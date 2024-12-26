-include ../make_config.mk

OS_SRC_DIR += \
../KERNEL/



#################  Configurations ##################################
#-----------------------------------------------
#   MCAL Source files Reapective to build dir 
#-----------------------------------------------

OS_SRCS += \
Os/Os.c \
Os/main.c

#-----------------------------------------------
#          MCAL object files
#-----------------------------------------------
OS_OBJS += \
Os.o \
main.o

#################  END Configurations #############################









os_build:
	@for p in  $(OS_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) -D$(TARGET_MCU) $(OS_SRC_DIR)$$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(OBJECTS_LOCATION)$$p.o ; \
	echo "$(OBJECTS_LOCATION)$$p.o" >> object.list ; \
	done

clean: os_clean

os_clean: 


.PHONY: os_clean





