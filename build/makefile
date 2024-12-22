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







-include ../makefile.defs



OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \



SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
$(BUILD_ARTIFACT).list \










#-----------------------------------------------
#          All individual file makefile
#-----------------------------------------------

all: main-build

main-build: $(BUILD_ARTIFACT) secondary-outputs

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)


$(BUILD_ARTIFACT) $(BUILD_ARTIFACT).map: $(OBJS) $(USER_OBJS) $(LINKER_SCRIPT) makefile object.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-g++ -o $(BUILD_ARTIFACT) @"object.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"$(LINKER_SCRIPT)" -Wl,-Map="$(BUILD_ARTIFACT).map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '


$(SIZE_OUTPUT): $(BUILD_ARTIFACT) makefile object.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '


$(BUILD_ARTIFACT).list: $(BUILD_ARTIFACT) makefile object.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(BUILD_ARTIFACT) > "$(BUILD_ARTIFACT).list"
	@echo 'Finished building: $@'
	@echo ' '


	@echo '##############################################'
	@echo '          Building OS'
	@echo '##############################################'
	make -C ./../KERNEL/ -f ./../KERNEL/os.mk os_sources_build TARGET_MCU=$(TARGET)


	@echo '##############################################'
	@echo '          Building MCAL'
	@echo '##############################################'
	make -C ./../MCAL/ -f ./../MCAL/mcal.mk device_sources_build TARGET_MCU=$(TARGET)



	@echo '##############################################'
	@echo '          Linking All together....'
	@echo '##############################################'
	$(CC) -o $(BUILD_LOCATION)$(BUILD_ARTIFACT) $(shell ls ../build_artifacts/*.o)  -T$(LINKER_SCRIPT) $(CC_LINKER_INPUT)



	@echo '##############################################'
	@echo ''
	@echo '          All buildng completed!'
	@echo ''
	@echo '##############################################'

linking_step: 
	



clean:
	rm ../build_artifacts/*.o

	@echo '##############################################'
	@echo ''
	@echo '          Cleaning completed!'
	@echo ''
	@echo '##############################################'


.PHONY: all clean dependents main-build

-include ../makefile.targets