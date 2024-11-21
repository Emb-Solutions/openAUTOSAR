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

#include "Mcu.h"



/*
*
* Specification: [ SWS_Mcu_00153, SRS_BSW_00101, SRS_BSW_00406 ]
* Implementation Specification [ SWS_Mcu_00116, SWS_Mcu_00244 , 
                                 SWS_Mcu_00245, SWS_Mcu_00246, 
                                 SWS_Mcu_00247
                               ]
*/
void Mcu_Init (const Mcu_ConfigType* ConfigPtr )
{

}


/*
*
* Specification: [ SWS_Mcu_00154 ]
* Implementation Specification [ SWS_Mcu_00011, SWS_Mcu_0013
                               ]
*/
Std_ReturnType Mcu_InitRamSection ( Mcu_RamSectionType RamSection )
{

}

/*
*
* Specification: [ SWS_Mcu_00155 ]
* Implementation Specification [ SWS_Mcu_00137, SWS_Mcu_00138,
                                 SWS_Mcu_00139, SWS_Mcu_00210
                               ]
*/
Std_ReturnType Mcu_InitClock ( Mcu_ClockType ClockSetting )
{

}



/*
*
* Specification: [ SWS_Mcu_00156 ]
* Implementation Specification [ SSWS_Mcu_00140, SWS_Mcu_00141,
                                 SWS_Mcu_00056, SWS_Mcu_00142
                                 SWS_Mcu_00205
                               ]
*/
Std_ReturnType Mcu_DistributePllClock ( void )
{

}

/*
*
* Specification: [ SWS_Mcu_00157 ]
* Implementation Specification [ SWS_Mcu_00008, SWS_Mcu_00132,
                                 SWS_Mcu_00206
                               ]
*/
Mcu_PllStatusType Mcu_GetPllStatus ( void )
{

}

/*
*
* Specification: [ SWS_Mcu_00158 ]
* Implementation Specification [ SWS_Mcu_00005, SWS_Mcu_00133
                               ]
*/
Mcu_ResetType Mcu_GetResetReason ( void )
{

}

/*
*
* Specification: [ SWS_Mcu_00159 ]
* Implementation Specification [ SWS_Mcu_00135, SWS_Mcu_00006
                               ]
*/
Mcu_RawResetType Mcu_GetResetRawValue ( void )
{

}

/*
*
* Specification: [ SWS_Mcu_00160 ]
* Implementation Specification [ SWS_Mcu_00143, SWS_Mcu_00144,
                                 SWS_Mcu_00145, SWS_Mcu_00146
                               ]
*/
void Mcu_PerformReset ( void )
{

}

/*
*
* Specification: [ SWS_Mcu_00161 ]
* Implementation Specification [ SWS_Mcu_00147, SWS_Mcu_00148
                               ]
*/
void Mcu_SetMode ( Mcu_ModeType McuMode )
{

}

/*
*
* Specification: [ SWS_Mcu_00162 ]
* Implementation Specification [ SWS_Mcu_00147, SWS_Mcu_00148
                               ]
*/

void Mcu_GetVersionInfo ( Std_VersionInfoType* versioninfo )
{

}

/*
*
* Specification: [ SWS_Mcu_00207 ]
* Implementation Specification [ SWS_Mcu_00208, SWS_Mcu_00209
                               ]
*/
Mcu_RamStateType Mcu_GetRamState ( void )
{

}