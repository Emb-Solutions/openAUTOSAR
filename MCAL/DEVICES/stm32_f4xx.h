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

#ifndef __STM32F4xx_H__
#define __STM32F4xx_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(STM32F405xx)
#include "stm32f405xx.h"
#elif defined(STM32F415xx)
#include "stm32f415xx.h"
#elif defined(STM32F407xx)
#include "stm32f407xx.h"
#elif defined(STM32F417xx)
#include "stm32f417xx.h"
#elif defined(STM32F427xx)
#include "stm32f427xx.h"
#elif defined(STM32F437xx)
#include "stm32f437xx.h"
#elif defined(STM32F429xx)
#include "stm32f429xx.h"
#elif defined(STM32F439xx)
#include "stm32f439xx.h"
#elif defined(STM32F401xC)
#include "stm32f401xc.h"
#elif defined(STM32F401xE)
#include "stm32f401xe.h"
#elif defined(STM32F410Tx)
#include "stm32f410tx.h"
#elif defined(STM32F410Cx)
#include "stm32f410cx.h"
#elif defined(STM32F410Rx)
#include "stm32f410rx.h"
#elif defined(STM32F411xE)
#include "stm32f411xe.h"
#elif defined(STM32F446xx)
#include "stm32f446xx.h"
#elif defined(STM32F469xx)
#include "stm32f469xx.h"
#elif defined(STM32F479xx)
#include "stm32f479xx.h"
#elif defined(STM32F412Cx)
#include "stm32f412cx.h"
#elif defined(STM32F412Zx)
#include "stm32f412zx.h"
#elif defined(STM32F412Rx)
#include "stm32f412rx.h"
#elif defined(STM32F412Vx)
#include "stm32f412vx.h"
#elif defined(STM32F413xx)
#include "stm32f413xx.h"
#elif defined(STM32F423xx)
#include "stm32f423xx.h"
#else
#error "Please Define the STM32xx device"
#endif


#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL)))

/* Use of CMSIS compiler intrinsics for register exclusive access */
/* Atomic 32-bit register access macro to set one or several bits */
#define ATOMIC_SET_BIT(REG, BIT)                             \
  do {                                                       \
    uint32_t val;                                            \
    do {                                                     \
      val = __LDREXW((__IO uint32_t *)&(REG)) | (BIT);       \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 32-bit register access macro to clear one or several bits */
#define ATOMIC_CLEAR_BIT(REG, BIT)                           \
  do {                                                       \
    uint32_t val;                                            \
    do {                                                     \
      val = __LDREXW((__IO uint32_t *)&(REG)) & ~(BIT);      \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 32-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFY_REG(REG, CLEARMSK, SETMASK)                          \
  do {                                                                     \
    uint32_t val;                                                          \
    do {                                                                   \
      val = (__LDREXW((__IO uint32_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK); \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U);               \
  } while(0)

/* Atomic 16-bit register access macro to set one or several bits */
#define ATOMIC_SETH_BIT(REG, BIT)                            \
  do {                                                       \
    uint16_t val;                                            \
    do {                                                     \
      val = __LDREXH((__IO uint16_t *)&(REG)) | (BIT);       \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 16-bit register access macro to clear one or several bits */
#define ATOMIC_CLEARH_BIT(REG, BIT)                          \
  do {                                                       \
    uint16_t val;                                            \
    do {                                                     \
      val = __LDREXH((__IO uint16_t *)&(REG)) & ~(BIT);      \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 16-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFYH_REG(REG, CLEARMSK, SETMASK)                         \
  do {                                                                     \
    uint16_t val;                                                          \
    do {                                                                   \
      val = (__LDREXH((__IO uint16_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK); \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U);               \
  } while(0)


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __STM32F4xx_H */