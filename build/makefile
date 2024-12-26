# Copyright (C) 2024 Subhajit Roy
# This file is part of openAUTOSAR/BSW
#
# openAUTOSAR free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# RTOS Basic Software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.


-include ../makefile.init

-include ./make_config.mk
-include ../MCAL/mcal.mk
-include ../KERNEL/os.mk
-include ../MCAL/startup.mk


ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif




-include ../makefile.defs


OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \



SIZE_OUTPUT += \
default.size.stdout \



export TARGET_MCU := 





#-----------------------------------------------
#          All individual file makefile
#-----------------------------------------------

all: main-build

main-build: clean_enviornment $(BUILD_ARTIFACT) secondary-outputs

secondary-outputs: $(SIZE_OUTPUT) $(BUILD_ARTIFACT).list 


$(BUILD_ARTIFACT) $(BUILD_ARTIFACT).map: startup_build mcal_build os_build 
	$(CPP) -o $(BUILD_LOCATION)$(BUILD_ARTIFACT) @"object.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"$(LINKER_SCRIPT)" -Wl,-Map="$(BUILD_LOCATION)$(BUILD_ARTIFACT).map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo '##############################################'
	@echo ''
	@echo '   Artifcact Generated [ $@ ]'
	@echo ''
	@echo '##############################################'
	@echo ' '


$(SIZE_OUTPUT): $(BUILD_ARTIFACT) makefile object.list $(OPTIONAL_TOOL_DEPS)
	@echo '##############################################'
	@arm-none-eabi-size  --format=sysv --radix=16 $(BUILD_LOCATION)$(BUILD_ARTIFACT)
	@echo '##############################################'
	@echo ' '


$(BUILD_ARTIFACT).list: $(BUILD_ARTIFACT) makefile object.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(BUILD_LOCATION)$(BUILD_ARTIFACT) > "$(BUILD_LOCATION)$(BUILD_ARTIFACT).list"
	@echo '##############################################'
	@echo ''
	@echo '   $(BUILD_ARTIFACT).list Generated...'
	@echo ''
	@echo '##############################################'
	@echo ' '

clean_enviornment:
	@echo > ./object.list

clean:
	$(RM) $(BUILD_LOCATION)$(BUILD_ARTIFACT) object.list $(BUILD_LOCATION)$(BUILD_ARTIFACT).list $(SIZE_OUTPUT) $(BUILD_LOCATION)$(BUILD_ARTIFACT).map
	@echo '##############################################'
	@echo ''
	@echo '          Cleaning completed!'
	@echo ''
	@echo '##############################################'


.PHONY: all clean dependents main-build

-include ../makefile.targets