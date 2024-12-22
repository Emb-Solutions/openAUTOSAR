
-include ../build/make_config.mk


#-----------------------------------------------
#          Directories
#-----------------------------------------------

OBJECT_DIRECTORY := ../build_artifacts/
SOURCE_DIRECTORY := ./OS/


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





$(OBJECT_DIRECTORY)%.o: $(SOURCE_DIRECTORY)%.c ./subdir.mk
	$(CC) "$<" $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP) -o "$@"


os_sources_build: $(OS_OBJS)
	








