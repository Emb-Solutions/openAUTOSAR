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




#-include sources.mk
-include make_config.mk
#-include devices.mk

#-----------------------------------------------
#          All individual file makefile
#-----------------------------------------------

all:
	@echo '##############################################'
	@echo '          Building MCAL'
	@echo '##############################################'
	make -C ./../MCAL/ -f ./../MCAL/mcal.mk device_sources_build TARGET_MCU=$(TARGET)

	@echo '##############################################'
	@echo '          Building OS'
	@echo '##############################################'
	make -C ./../KERNEL/ -f ./../KERNEL/os.mk os_sources_build TARGET_MCU=$(TARGET)

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