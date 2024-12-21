
-include ../build/make_config.mk


#-----------------------------------------------
#          MCAL Source files
#-----------------------------------------------
OS_SRCS += \
./Os/Os.c \


#-----------------------------------------------
#          MCAL object files
#-----------------------------------------------
OS_OBJS += \
../build_artifacts/Os.o \



os_sources_build: $(OS_OBJS)

$(OS_OBJS): $(OS_SRCS)
	$(CC) $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) "$<" -o "$@"








