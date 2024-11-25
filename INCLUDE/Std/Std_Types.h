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

/*Typedefs*/
typedef uint8_t                Std_ReturnType;
typedef uint8_t                boolean;

/* Global defines*/

# define FALSE                 0x00
# define TRUE                  0x01

#define STD_HIGH		       0x01
#define STD_LOW			       0x00

#define STD_ACTIVE		       0x01
#define STD_IDLE		       0x00

#define STD_ON			       0x01
#define STD_OFF			       0x00

#define E_OK 				   	 0x00u
#define E_NOT_OK 			   	(Std_ReturnType)1u
#define E_NO_DTC_AVAILABLE		(Std_ReturnType)2u
#define E_SESSION_NOT_ALLOWED	(Std_ReturnType)4u
#define E_PROTOCOL_NOT_ALLOWED	(Std_ReturnType)5u
#define E_REQUEST_NOT_ACCEPTED	(Std_ReturnType)8u
#define E_REQUEST_ENV_NOK		(Std_ReturnType)9u
#define E_PENDING				(Std_ReturnType)10u
#define E_COMPARE_KEY_FAILED	(Std_ReturnType)11u
#define E_FORCE_RCRRP			(Std_ReturnType)12u

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

/** make compare number... #if version > 10203  ( 1.2.3 ) */
#define STD_GET_VERSION (_major,_minor,_patch) (_major * 10000 + _minor * 100 + _patch)

/** Create Std_VersionInfoType */
// PC-Lint Exception MISRA rule 19.12
//lint -save -esym(960,19.12)
#define STD_GET_VERSION_INFO(_vi,_module) \
	if(_vi != NULL) {\
		((_vi)->vendorID =  _module ## _VENDOR_ID);\
		((_vi)->moduleID = _module ## _MODULE_ID);\
		((_vi)->sw_major_version = _module ## _SW_MAJOR_VERSION);\
		((_vi)->sw_minor_version =  _module ## _SW_MINOR_VERSION);\
		((_vi)->sw_patch_version =  _module ## _SW_PATCH_VERSION);\
		((_vi)->ar_major_version =  _module ## _AR_MAJOR_VERSION);\
		((_vi)->ar_minor_version =  _module ## _AR_MINOR_VERSION);\
		((_vi)->ar_patch_version =  _module ## _AR_PATCH_VERSION);\
	}
//lint -restore


typedef struct
{
   /* data */
   uint8_t mask8_t;
   uint16_t mask16_t;
   uint32_t mask32_t;
}mask_types;


#endif