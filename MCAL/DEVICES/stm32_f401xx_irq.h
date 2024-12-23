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

#ifndef __STM32F401xx_IRQ_H__
#define __STM32F401xx_IRQ_H__

#include "stm32_f401xx.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


void Reset_Handler(void) __attribute__((weak));
void  __attribute__((weak)) NMI_Handler(void);
void HardFault_Handler(void) __attribute__((weak));
void MemManage_Handler(void) __attribute__((weak));
void BusFault_Handler(void) __attribute__((weak));
void UsageFault_Handler(void) __attribute__((weak));
void DebugMon_Handler(void) __attribute__((weak));

void SVC_Handler(void) __attribute__((weak));
void PendSV_Handler(void) __attribute__((weak));
void SysTick_Handler(void) __attribute__((weak));

void WWDG_IRQHandler(void) __attribute__((weak));
void PVD_IRQHandler(void) __attribute__((weak));
void TAMP_STAMP_IRQHandler(void) __attribute__((weak));
void RTC_WKUP_IRQHandler(void)  __attribute__((weak));
void FLASH_IRQHandler(void) __attribute__((weak));
void RCC_IRQHandler(void)  __attribute__((weak));
void EXTI0_IRQHandler(void) __attribute__((weak));
void EXTI1_IRQHandler(void) __attribute__((weak));
void EXTI2_IRQHandler(void) __attribute__((weak));
void EXTI3_IRQHandler(void) __attribute__((weak));
void EXTI4_IRQHandler(void) __attribute__((weak));
void DMA1_Stream0_IRQHandler(void) __attribute__((weak));
void DMA1_Stream1_IRQHandler(void) __attribute__((weak));
void DMA1_Stream2_IRQHandler(void) __attribute__((weak));
void DMA1_Stream3_IRQHandler(void) __attribute__((weak));
void DMA1_Stream4_IRQHandler(void) __attribute__((weak));
void DMA1_Stream5_IRQHandler(void) __attribute__((weak));
void DMA1_Stream6_IRQHandler(void) __attribute__((weak));
void DMA1_Stream7_IRQHandler(void) __attribute__((weak));
void DMA2_Stream0_IRQHandler(void) __attribute__((weak));
void DMA2_Stream1_IRQHandler(void) __attribute__((weak));
void DMA2_Stream2_IRQHandler(void) __attribute__((weak));
void DMA2_Stream3_IRQHandler(void) __attribute__((weak));
void DMA2_Stream4_IRQHandler(void) __attribute__((weak));
void DMA2_Stream5_IRQHandler(void) __attribute__((weak));
void DMA2_Stream6_IRQHandler(void)  __attribute__((weak));
void DMA2_Stream7_IRQHandler(void) __attribute__((weak));
void EXTI9_5_IRQHandler(void) __attribute__((weak));
void ADC_IRQHandler(void) __attribute__((weak));
void TIM1_BRK_TIM9_IRQHandler(void) __attribute__((weak));
void TIM1_UP_TIM10_IRQHandler(void) __attribute__((weak));
void TIM1_TRG_COM_TIM11_IRQHandler(void) __attribute__((weak));
void TIM1_CC_IRQHandler(void) __attribute__((weak));
void TIM2_IRQHandler(void) __attribute__((weak));
void TIM3_IRQHandler(void) __attribute__((weak));
void TIM4_IRQHandler(void) __attribute__((weak));
void I2C1_EV_IRQHandler(void) __attribute__((weak));
void I2C1_ER_IRQHandler(void) __attribute__((weak));
void I2C2_EV_IRQHandler(void) __attribute__((weak));
void I2C2_ER_IRQHandler(void) __attribute__((weak));
void SPI1_IRQHandler(void) __attribute__((weak));
void SPI2_IRQHandler(void) __attribute__((weak));
void USART1_IRQHandler(void) __attribute__((weak));
void USART2_IRQHandler(void) __attribute__((weak));
void EXTI15_10_IRQHandler(void) __attribute__((weak));
void RTC_Alarm_IRQHandler(void) __attribute__((weak));
void OTG_FS_WKUP_IRQHandler(void) __attribute__((weak));
void SDIO_IRQHandler(void) __attribute__((weak));
void TIM5_IRQHandler(void) __attribute__((weak));
void SPI3_IRQHandler(void) __attribute__((weak));
void OTG_FS_IRQHandler(void) __attribute__((weak));
void I2C3_EV_IRQHandler(void) __attribute__((weak));
void I2C3_ER_IRQHandler(void) __attribute__((weak));
void FPU_IRQHandler(void) __attribute__((weak));
void SPI4_IRQHandler(void) __attribute__((weak));



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif