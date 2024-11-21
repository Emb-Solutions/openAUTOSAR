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


/*File Name: std_types.h
   Date:     15th Nov 2024
   Author:   Sourav Dey
   Description: Header file for standard types.
*/


#ifndef STD_TYPES_H
#define STD_TYPES_H

/*Standard Library includes*/

# include <stdint.h>
# include <stddef.h>

/* Global defines*/

# define FALSE                0x00
# define TRUE                 0x01

#define STD_HIGH		         0x01
#define STD_LOW			      0x00

#define STD_ACTIVE		      0x01
#define STD_IDLE		         0x00

#define STD_ON			         0x01
#define STD_OFF			      0x00


/*Typedefs*/

typedef uint8_t   boolean;

/*Structures*/

typedef struct {
	// TODO: not done!!
	uint16_t vendorID;
	uint16_t moduleID;
	uint8_t  instanceID;

	uint8_t sw_major_version;    /**< Vendor numbers */
	uint8_t sw_minor_version;    /**< Vendor numbers */
	uint8_t sw_patch_version;    /**< Vendor numbers */

	uint8_t ar_major_version;    /**< Autosar spec. numbers */
	uint8_t ar_minor_version;    /**< Autosar spec. numbers */
	uint8_t ar_patch_version;    /**< Autosar spec. numbers */
} Std_VersionInfoType;


typedef struct
{
   /* data */
   uint8_t mask8_t;
   uint16_t mask16_t;
   uint32_t mask32_t;
}mask_types;


#endif