-include ../make_config.mk

#-----------------------------------------------
#   MCAL Source files Reapective to build dir 
#-----------------------------------------------

OS_SRC_DIR += \
../KERNEL/

OS_OBJ_DIR += \
./build_artifacts/


OS_SRCS += \
Os/Os.c \
Os/main.c


#-----------------------------------------------
#          MCAL object files
#-----------------------------------------------
OS_OBJS += \
Os/Os.o


os_build:
	@for p in  $(OS_SRCS); \
	do \
	echo ; \
	echo Compiling ... $$p ; \
	echo ; \
	$(CC) $(OS_SRC_DIR)$$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o $(OS_OBJ_DIR)$$p.o ; \
	done


clean: os_clean

os_clean: 
	$(RM)	$(OS_OBJ_DIR)$(OS_OBJS)


.PHONY: os_clean





