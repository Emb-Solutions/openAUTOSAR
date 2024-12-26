/*
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
*/

#ifndef __MCU_H__
#define __MCU_H__

#include "../../../INCLUDE/Std/Std_Types.h"


/*
Specification: [SWS_Mcu_00249]
*/
typedef struct 
{

}Mcu_ConfigType;

/*
Specification: [SWS_Mcu_00250]
*/
typedef enum 
{
    MCU_PLL_LOCKED              = 0x00,
    MCU_PLL_UNLOCKED            = 0x01,
    MCU_PLL_STATUS_UNDEFINED    = 0x02

}Mcu_PllStatusType;

/*
Specification: [SWS_Mcu_00251]
*/
typedef unsigned int Mcu_ClockType;


/*
Specification: [SWS_Mcu_00252]
*/
typedef enum 
{
    MCU_POWER_ON_RESET      = 0x00,
    MCU_WATCHDOG_RESET      = 0x01,
    MCU_SW_RESET            = 0x02,
    MCU_RESET_UNDEFINED     = 0x03
}Mcu_ResetType;

/*
Specification: [SWS_Mcu_00253]
*/
typedef unsigned int  Mcu_RawResetType; 

/*
Specification: [SWS_Mcu_00254]
*/
typedef unsigned int  Mcu_ModeType; 

/*
Specification: [SWS_Mcu_00255]
*/
typedef unsigned int  Mcu_RamSectionType; 

/*
Specification: [SWS_Mcu_00256]
*/
typedef enum 
{
    MCU_RAMSTATE_INVALID    = 0x00,
    MCU_RAMSTATE_VALID      = 0x01,

}Mcu_RamStateType;







#endif