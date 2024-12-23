-include ../make_config.mk

#-----------------------------------------------
#   MCAL Source files Reapective to build dir 
#-----------------------------------------------
OS_SRCS += \
../KERNEL/Os/Os.c \


#-----------------------------------------------
#          MCAL object files
#-----------------------------------------------
OS_OBJS += \
./build_artifacts/Os.o


os_build: $(OS_OBJS)
# 	@for p in  $(OS_SRCS); \
#     do \
# 		for y in $(OS_OBJS);\
#       	do\
#         	echo ; \
#     		echo Compiling... $$p; \
# 			echo ; \
# 			$(CC) $$p $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP)   -o $$y ; \
#     	done \
#     done

	

$(OS_OBJS): $(OS_SRCS)
	@echo 'Compiling... $<'
	$(CC) $< $(CC_OPTIMIZATION)  $(CC_EXTRA_FLAGS) $(CC_INPUT_STD) $(CC_WARNINGS) $(CC_TARGET_PROP)   -o $@
	@echo ''


clean: os_clean

os_clean: 
	$(RM)	$(OS_OBJS)


.PHONY: os_clean





