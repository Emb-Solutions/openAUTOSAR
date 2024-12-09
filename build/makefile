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
#-include make_config.mk
#-include devices.mk

#-----------------------------------------------
#          All individual file makefile
#-----------------------------------------------

all:
	@echo '##############################################'
	@echo '          Building MCAL'
	@echo '##############################################'
	make -C ./../MCAL/ -f ./../MCAL/mcal.mk device_sources_build

	@echo '##############################################'
	@echo ''
	@echo '          All buildng completed!'
	@echo ''
	@echo '##############################################'

clean:
	rm ../build_artifacts/*.o

	@echo '##############################################'
	@echo ''
	@echo '          Cleaning completed!'
	@echo ''
	@echo '##############################################'