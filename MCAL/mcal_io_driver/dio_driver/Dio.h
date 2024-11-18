/* File Name: dio_driver.h
   Date:      15th Nov 2024
   Author:    Sourav Dey
   Description: Header file for DIO Driver.*/


/* Include files*/
#include "../../../include/std/std_types.h"


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

Dio_LevelType STD_LOW      = 0x00;
Dio_LevelType STD_HIGH     = 0x01;


/*[SWS_Dio_00186] Definition of datatype Dio_PortLevelType*/
typedef unsigned int Dio_PortLevelType;


/*[SWS_Dio_00133] Definition of API function Dio_ReadChannel*/
Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
