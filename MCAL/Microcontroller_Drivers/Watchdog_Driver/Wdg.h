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

#ifndef __WDG_H__
#define __WDG_H__

#include "../../../INCLUDE/Std/Std_Types.h"
#include "../../../ECU_Abs/WdgIf/WdgIf.h"

/* DEM needed to be included once it is created. */


typedef struct
{
   uint32_t ReloadValue;
   uint8_t ActivationBit;
}Wdg_SettingsType;

typedef struct
{
	WdgIf_ModeType Wdg_DefaultMode;
	Wdg_SettingsType WdgSettingsFast;
	Wdg_SettingsType WdgSettingsSlow;
	Wdg_SettingsType WdgSettingsOff;
}Wdg_ModeConfigType;

typedef struct
{
	const Wdg_ModeConfigType *Wdg_ModeConfig;
}Wdg_ConfigType;

 extern const Wdg_ConfigType WdgConfig;


/*[SWS_Wdg_00106] Definition of API function Wdg_Init*/
void Wdg_Init (const Wdg_ConfigType* ConfigPtr);

/*[SWS_Wdg_00107] Definition of API function Wdg_SetMode*/
Std_ReturnType Wdg_SetMode (WdgIf_ModeType Mode);

/*[SWS_Wdg_00155] Definition of API function Wdg_SetTriggerCondition*/
void Wdg_SetTriggerCondition (uint16_t timeout);

/*[SWS_Wdg_00109] Definition of API function Wdg_GetVersionInfo*/
void Wdg_GetVersionInfo (Std_VersionInfoType* versioninfo);

/* [SWS_Wdg_00111] Definition of optional interfaces requested by module Wdg*/

#endif
