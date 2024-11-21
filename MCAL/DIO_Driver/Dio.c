/* Copyright (C) 2024 Sourav Dey
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



/* File Name: dio_driver.c
   Date:      15th Nov 2024
   Author:    Sourav Dey
   Description: Specification of DIO Driver.*/

# include "Dio.h"



typedef struct 
{
   const Dio_ConfigType *config;
   boolean Initrun;
}Dio_GlobalType;

static Dio_GlobalType Dio_Global = {.config = NULL, .Initrun = FALSE};


static int Channel_Config_contains(Dio_ChannelType ChannelId)
{
   const Dio_ChannelType* ch_ptr = Dio_Global.config->ChannelConfig;
   int retv = 0;
   while (DIO_END_OF_LIST!=*ch_ptr) {
        if (*ch_ptr==ChannelId) {
            retv=1;
            break;
        }
        ch_ptr++;
    }
    return retv;
}

static int Port_Config_Contains(Dio_PortType PortId)
{
   const Dio_PortType* ch_ptr = Dio_Global.config->PortConfig;
   int retv = 0;
   while (DIO_END_OF_LIST!=*ch_ptr) {
        if (*ch_ptr==PortId) {
            retv=1;
            break;
        }
        ch_ptr++;
    }
    return retv;
}

static int Channel_Group_Config_Contains(const Dio_ChannelGroupType* _channelGroupIdPtr)
{
   const Dio_ChannelGroupType* chgrp_ptr = Dio_Global.config->GroupConfig;
   int retv=0;
    if(_channelGroupIdPtr != 0) {
        while (DIO_END_OF_LIST!=chgrp_ptr->port) {
            if (chgrp_ptr->port==_channelGroupIdPtr->port&&
                    chgrp_ptr->mask.mask8_t ==_channelGroupIdPtr->mask.mask8_t) {
                retv=1;
                break;
            }
            chgrp_ptr++;
        }
    }
    return retv;
}


#define IS_VALID_CHANNEL(_x) (0 != Channel_Config_Contains(_x))
#define IS_VALID_PORT(_x) (0 != Port_Config_Contains(_x))
#define IS_VALID_CHANNELGROUP(_x) (0 != Channel_Group_Config_Contains(_x))


/*[SWS_Dio_00135] Definition of API function Dio_ReadPort*/
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    Dio_PortLevelType level;

    /*TODO DET Validation*/

    /* CIMSIS / Register level coding.*/

    return level;
}

/*[SWS_Dio_00136] Definition of API function Dio_WritePort*/
void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level)
{

    /*TODO DET Validation*/

    /* CIMSIS / Register level coding.*/
}


/*[SWS_Dio_00133] Definition of API function Dio_ReadChannel*/

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId)
{
   Dio_LevelType level;
   Dio_PortLevelType portVal = DIO_GET_PORT_FROM_CHANNEL_ID(ChannelId);
   Dio_PortLevelType bit     = DIO_GET_BIT_FROM_CHANNEL_ID(ChannelId);

   if ((portVal & bit) != STD_LOW)
   {
      level = STD_HIGH;
   } 
   else
   {
      level = STD_LOW;
   }
    return (level);
}

/*[SWS_Dio_00134] Definition of API function Dio_WriteChannel*/
void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level)
{
    Dio_PortLevelType portVal = Dio_ReadPort(DIO_GET_PORT_FROM_CHANNEL_ID(ChannelId));
	Dio_PortLevelType bit = DIO_GET_BIT_FROM_CHANNEL_ID(ChannelId);

	if(Level == STD_HIGH)
    {
		portVal |= bit;
	}
    else
    {
		portVal &= ~bit;
	}

	Dio_WritePort(DIO_GET_PORT_FROM_CHANNEL_ID(ChannelId), portVal);
}

/*[SWS_Dio_00137] Definition of API function Dio_ReadChannelGroup*/
Dio_PortLevelType Dio_ReadChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr)
{
    Dio_PortLevelType level;

    /* TODO: Validation using DET*/

    // Get the mask values
    level = Dio_ReadPort(ChannelGroupIdPtr->port) & (ChannelGroupIdPtr->mask.mask8_t);

    level = level << ChannelGroupIdPtr->offset;

    return level;

}

/* [SWS_Dio_00138] Definition of API function Dio_WriteChannelGroup */
void Dio_WriteChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level)
{

    // TODO: Validation of DET needs to be implemented.

    // Shift up and apply mask so that no unwanted bits are affected
	Level = (Level << ChannelGroupIdPtr->offset) & ChannelGroupIdPtr->mask.mask8_t;

	// Read port and clear out masked bits
	Dio_PortLevelType portVal = Dio_ReadPort(ChannelGroupIdPtr->port) & (~ChannelGroupIdPtr->mask.mask8_t);

	// Or in the upshifted masked level
	portVal |= Level;

	Dio_WritePort(ChannelGroupIdPtr->port, portVal);
}




