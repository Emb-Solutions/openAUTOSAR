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


/* File Name: dio_driver.h
   Date:      15th Nov 2024
   Author:    Sourav Dey
   Description: Header file for DIO Driver.*/




#ifndef DIO_H_
#define DIO_H_

/* Include files*/
#include "../../INCLUDE/Std/Std_Types.h"


/*Hw specific defines*/
#define DIO_END_OF_LIST                         (0xFFFFFFFFu)

/*APIs for the Source ID*/
#define DIO_READCHANNEL_ID			               0x00
#define DIO_WRITECHANNEL_ID			            0x01
#define DIO_READPORT_ID				               0x02
#define DIO_WRITEPORT_ID			               0x03
#define DIO_READCHANNELGROUP_ID		            0x04
#define DIO_WRITECHANNELGROUP_ID	               0x05



/*defines*/
#define DIO_GET_PORT_FROM_CHANNEL_ID(_channelId) (_channelId / 16)
#define DIO_GET_BIT_FROM_CHANNEL_ID(_channelId) (1 << (_channelId % 16))

/*[SWS_Dio_00182] Definition of datatype Dio_ChannelType*/
typedef unsigned int Dio_ChannelType;

/* SWS_Dio_00183] Definition of datatype Dio_PortType */
typedef unsigned int Dio_PortType;

/*SWS_Dio_00184] Definition of datatype Dio_ChannelGroupType*/

typedef struct {
   mask_types mask;         
   uint8_t offset;
   Dio_PortType port; 

}Dio_ChannelGroupType;


/*Definition of datatype Dio_LevelType*/
typedef uint8_t Dio_LevelType;


/** @req SWS_Dio_00187 */
typedef struct {
    const Dio_ChannelType* ChannelConfig;
    const Dio_ChannelGroupType* GroupConfig;
    const Dio_PortType *PortConfig;
}Dio_ConfigType;

/*[SWS_Dio_00186] Definition of datatype Dio_PortLevelType*/
typedef unsigned int Dio_PortLevelType;

/*[SWS_Dio_00133] Definition of API function Dio_ReadChannel*/
Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);

/*[SWS_Dio_00134] Definition of API function Dio_WriteChannel*/
void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level);

/*[SWS_Dio_00135] Definition of API function Dio_ReadPort*/
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);

/*[SWS_Dio_00135] Definition of API function Dio_ReadPort*/
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);

/*[SWS_Dio_00136] Definition of API function Dio_WritePort*/
void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level);

/*[SWS_Dio_00137] Definition of API function Dio_ReadChannelGroup*/
Dio_PortLevelType Dio_ReadChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr);

/* [SWS_Dio_00138] Definition of API function Dio_WriteChannelGroup */
void Dio_WriteChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level);

/* [SWS_Dio_00190] Definition of API function Dio_FlipChannel */
Dio_LevelType Dio_FlipChannel (Dio_ChannelType ChannelId);

/*[SWS_Dio_00300] Definition of API function Dio_MaskedWritePort*/
void Dio_MaskedWritePort (Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask);

#endif /*DIO_H_*/