

#include "stm32_f429xx_startup.h"


// struct __attribute__ ((section ("isr_vector")))
// {
//     uint32_t _estack;
//     (void)(*Reset_Handler)(void);
//     (void)(*NMI_Handler)()
//     (void)(*HardFault_Handler)();
//     (void)(*MemManage_Handler)();
//     (void)(*BusFault_Handler)();
//     (void)(*UsageFault_Handler)();
//     0
//     0
//     0
//     0
//     (void)(*SVC_Handler)();
//     (void)(*DebugMon_Handler)();
//     0
//     (void)(*PendSV_Handler)();
//     (void)(*SysTick_Handler)();
  
//     /* External Interrupts */
//     (void)(*WWDG_IRQHandler)();                   /* Window WatchDog              */                                        
//     (void)(*PVD_IRQHandler)();                    /* PVD through EXTI Line detection */                        
//     (void)(*TAMP_STAMP_IRQHandler)();             /* Tamper and TimeStamps through the EXTI line */            
//     (void)(*RTC_WKUP_IRQHandler)();               /* RTC Wakeup through the EXTI line */                      
//     (void)(*FLASH_IRQHandler)();                  /* FLASH                        */                                          
//     (void)(*RCC_IRQHandler)();                    /* RCC                          */                                            
//     (void)(*EXTI0_IRQHandler)();                  /* EXTI Line0                   */                        
//     (void)(*EXTI1_IRQHandler)();                  /* EXTI Line1                   */                          
//     (void)(*EXTI2_IRQHandler)();                  /* EXTI Line2                   */                          
//     (void)(*EXTI3_IRQHandler)();                  /* EXTI Line3                   */                          
//     (void)(*EXTI4_IRQHandler)();                  /* EXTI Line4                   */                          
//     (void)(*DMA1_Stream0_IRQHandler)();           /* DMA1 Stream 0                */                  
//     (void)(*DMA1_Stream1_IRQHandler)();           /* DMA1 Stream 1                */                   
//     (void)(*DMA1_Stream2_IRQHandler)();           /* DMA1 Stream 2                */                   
//     (void)(*DMA1_Stream3_IRQHandler)();           /* DMA1 Stream 3                */                   
//     (void)(*DMA1_Stream4_IRQHandler)();           /* DMA1 Stream 4                */                   
//     (void)(*DMA1_Stream5_IRQHandler)();           /* DMA1 Stream 5                */                   
//     (void)(*DMA1_Stream6_IRQHandler)();           /* DMA1 Stream 6                */                   
//     (void)(*ADC_IRQHandler)();                    /* ADC1, ADC2 and ADC3s         */                   
//     (void)(*CAN1_TX_IRQHandler)();                /* CAN1 TX                      */                         
//     (void)(*CAN1_RX0_IRQHandler)();               /* CAN1 RX0                     */                          
//     (void)(*CAN1_RX1_IRQHandler)();               /* CAN1 RX1                     */                          
//     (void)(*CAN1_SCE_IRQHandler)();               /* CAN1 SCE                     */                          
//     (void)(*EXTI9_5_IRQHandler)();                /* External Line[9:5]s          */                          
//     (void)(*TIM1_BRK_TIM9_IRQHandler)();          /* TIM1 Break and TIM9          */         
//     (void)(*TIM1_UP_TIM10_IRQHandler)();          /* TIM1 Update and TIM10        */         
//     (void)(*TIM1_TRG_COM_TIM11_IRQHandler)();     /* TIM1 Trigger and Commutation and TIM11 */
//     (void)(*TIM1_CC_IRQHandler )();               /* TIM1 Capture Compare         */                          
//     (void)(*TIM2_IRQHandler )();                  /* TIM2                         */                   
//     (void)(*TIM3_IRQHandler )();                  /* TIM3                         */                   
//     (void)(*TIM4_IRQHandler)();                   /* TIM4                         */                   
//     (void)(*I2C1_EV_IRQHandler)();                /* I2C1 Event                   */                          
//     (void)(*I2C1_ER_IRQHandler)();                /* I2C1 Error                   */                          
//     (void)(*I2C2_EV_IRQHandler)();                /* I2C2 Event                   */                          
//     (void)(*I2C2_ER_IRQHandler)();                /* I2C2 Error                   */                            
//     (void)(*SPI1_IRQHandler)();                   /* SPI1                         */                   
//     (void)(*SPI2_IRQHandler)();                   /* SPI2                         */                   
//     (void)(*USART1_IRQHandler)();                 /* USART1                       */                   
//     (void)(*USART2_IRQHandler)();                 /* USART2                       */                   
//     (void)(*USART3_IRQHandler)();                 /* USART3                       */                   
//     (void)(*EXTI15_10_IRQHandler)();              /* External Line[15:10]s        */                          
//     (void)(*RTC_Alarm_IRQHandler)();              /* RTC Alarm (A and B) through EXTI Line */                 
//     (void)(*OTG_FS_WKUP_IRQHandler)();            /* USB OTG FS Wakeup through EXTI line */                       
//     (void)(*TIM8_BRK_TIM12_IRQHandler)();         /* TIM8 Break and TIM12         */         
//     (void)(*TIM8_UP_TIM13_IRQHandler)();          /* TIM8 Update and TIM13        */         
//     (void)(*TIM8_TRG_COM_TIM14_IRQHandler)();     /* TIM8 Trigger and Commutation and TIM14 */
//     (void)(*TIM8_CC_IRQHandler)();                /* TIM8 Capture Compare         */                          
//     (void)(*DMA1_Stream7_IRQHandler)();           /* DMA1 Stream7                 */                          
//     (void)(*FMC_IRQHandler)();                    /* FMC                         */                   
//     (void)(*SDIO_IRQHandler)();                   /* SDIO                         */                   
//     (void)(*TIM5_IRQHandler )();                  /* TIM5                         */                   
//     (void)(*SPI3_IRQHandler)();                   /* SPI3                         */                   
//     (void)(*UART4_IRQHandler)();                  /* UART4                        */                   
//     (void)(*UART5_IRQHandler)();                  /* UART5                        */                   
//     (void)(*TIM6_DAC_IRQHandler)();               /* TIM6 and DAC1&2 underrun errors */                   
//     (void)(*TIM7_IRQHandler)();                   /* TIM7                         */
//     (void)(*DMA2_Stream0_IRQHandler)();           /* DMA2 Stream 0                */                   
//     (void)(*DMA2_Stream1_IRQHandler)();           /* DMA2 Stream 1                */                   
//     (void)(*DMA2_Stream2_IRQHandler)();           /* DMA2 Stream 2                */                   
//     (void)(*DMA2_Stream3_IRQHandler)();           /* DMA2 Stream 3                */                   
//     (void)(*DMA2_Stream4_IRQHandler)();           /* DMA2 Stream 4                */                   
//     (void)(*ETH_IRQHandler)();                    /* Ethernet                     */                   
//     (void)(*ETH_WKUP_IRQHandler)();               /* Ethernet Wakeup through EXTI line */                     
//     (void)(*CAN2_TX_IRQHandler)();                /* CAN2 TX                      */                          
//     (void)(*CAN2_RX0_IRQHandler)();               /* CAN2 RX0                     */                          
//     (void)(*CAN2_RX1_IRQHandler)();               /* CAN2 RX1                     */                          
//     (void)(*CAN2_SCE_IRQHandler)();               /* CAN2 SCE                     */                          
//     (void)(*OTG_FS_IRQHandler)();                 /* USB OTG FS                   */                   
//     (void)(*DMA2_Stream5_IRQHandler)();           /* DMA2 Stream 5                */                   
//     (void)(*DMA2_Stream6_IRQHandler)();           /* DMA2 Stream 6                */                   
//     (void)(*DMA2_Stream7_IRQHandler)();           /* DMA2 Stream 7                */                   
//     (void)(*USART6_IRQHandler)();                 /* USART6                       */                    
//     (void)(*I2C3_EV_IRQHandler)();                /* I2C3 event                   */                          
//     (void)(*I2C3_ER_IRQHandler)();                /* I2C3 error                   */                          
//     (void)(*OTG_HS_EP1_OUT_IRQHandler)();         /* USB OTG HS End Point 1 Out   */                   
//     (void)(*OTG_HS_EP1_IN_IRQHandler)();          /* USB OTG HS End Point 1 In    */                   
//     (void)(*OTG_HS_WKUP_IRQHandler)();            /* USB OTG HS Wakeup through EXTI */                         
//     (void)(*OTG_HS_IRQHandler)();                 /* USB OTG HS                   */                   
//     (void)(*DCMI_IRQHandler)();                   /* DCMI                         */                   
//     0                                             /* Reserved                     */                   
//     (void)(*HASH_RNG_IRQHandler)();               /* Hash and Rng                 */
//     (void)(*FPU_IRQHandler)();                    /* FPU                          */
//     (void)(*UART7_IRQHandler)();                  /* UART7                        */      
//     (void)(*UART8_IRQHandler)();                  /* UART8                        */
//     (void)(*SPI4_IRQHandler)();                   /* SPI4                         */
//     (void)(*SPI5_IRQHandler)();                   /* SPI5 						  */
//     (void)(*SPI6_IRQHandler)();                   /* SPI6						  */
//     (void)(*SAI1_IRQHandler)();                   /* SAI1						  */
//     (void)(*LTDC_IRQHandler)();                   /* LTDC_IRQHandler			  */
//     (void)(*LTDC_ER_IRQHandler)();                /* LTDC_ER_IRQHandler			  */
//     (void)(*DMA2D_IRQHandler)();                  /* DMA2D                        */
// }isr_vectors;

int main()
{
    
}

