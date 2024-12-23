

#include "stm32_f401xx_startup.h"

struct  __attribute__ ((section ("isr_vector"))) isr_vector_list  
{
    uint32_t _estack;
    void (*Reset_Handler)(void);
    void (*NMI_Handler)();
    void (*HardFault_Handler)();
    void (*MemManage_Handler)();
    void (*BusFault_Handler)();
    void (*UsageFault_Handler)();
    uint32_t reserved;
    uint32_t reserved_1;
    uint32_t reserved_2;
    uint32_t reserved_3;
    void (*SVC_Handler)();
    void (*DebugMon_Handler)();
    uint32_t reserved_32;
    void (*PendSV_Handler)();
    void (*SysTick_Handler)();
    /* External Interrupts */
    void (*WWDG_IRQHandler)();                   /* Window WatchDog              */                                        
    void (*PVD_IRQHandler)();                    /* PVD through EXTI Line detection */                        
    void (*TAMP_STAMP_IRQHandler)();             /* Tamper and TimeStamps through the EXTI line */            
    void (*RTC_WKUP_IRQHandler)();               /* RTC Wakeup through the EXTI line */                      
    void (*FLASH_IRQHandler)();                  /* FLASH                        */                                          
    void (*RCC_IRQHandler)();                    /* RCC                          */                                            
    void (*EXTI0_IRQHandler)();                  /* EXTI Line0                   */                        
    void (*EXTI1_IRQHandler)();                  /* EXTI Line1                   */                          
    void (*EXTI2_IRQHandler)();                  /* EXTI Line2                   */                          
    void (*EXTI3_IRQHandler)();                  /* EXTI Line3                   */                          
    void (*EXTI4_IRQHandler)();                  /* EXTI Line4                   */                          
    void (*DMA1_Stream0_IRQHandler)();           /* DMA1 Stream 0                */                  
    void (*DMA1_Stream1_IRQHandler)();           /* DMA1 Stream 1                */                   
    void (*DMA1_Stream2_IRQHandler)();           /* DMA1 Stream 2                */                   
    void (*DMA1_Stream3_IRQHandler)();           /* DMA1 Stream 3                */                   
    void (*DMA1_Stream4_IRQHandler)();           /* DMA1 Stream 4                */                   
    void (*DMA1_Stream5_IRQHandler)();           /* DMA1 Stream 5                */                   
    void (*DMA1_Stream6_IRQHandler)();           /* DMA1 Stream 6                */                   
    void (*ADC_IRQHandler)();                    /* ADC1, ADC2 and ADC3s         */                   
    uint32_t reserved_4;                   
    uint32_t reserved_5;                       
    uint32_t reserved_6;                        
    uint32_t reserved_7;       
    void (*EXTI9_5_IRQHandler)();                /* External Line[9:5]s          */                          
    void (*TIM1_BRK_TIM9_IRQHandler)();          /* TIM1 Break and TIM9          */         
    void (*TIM1_UP_TIM10_IRQHandler)();          /* TIM1 Update and TIM10        */         
    void (*TIM1_TRG_COM_TIM11_IRQHandler)();     /* TIM1 Trigger and Commutation and TIM11 */
    void (*TIM1_CC_IRQHandler )();               /* TIM1 Capture Compare         */                          
    void (*TIM2_IRQHandler )();                  /* TIM2                         */                   
    void (*TIM3_IRQHandler )();                  /* TIM3                         */                   
    void (*TIM4_IRQHandler)();                   /* TIM4                         */                   
    void (*I2C1_EV_IRQHandler)();                /* I2C1 Event                   */                          
    void (*I2C1_ER_IRQHandler)();                /* I2C1 Error                   */                          
    void (*I2C2_EV_IRQHandler)();                /* I2C2 Event                   */                          
    void (*I2C2_ER_IRQHandler)();                /* I2C2 Error                   */                            
    void (*SPI1_IRQHandler)();                   /* SPI1                         */                   
    void (*SPI2_IRQHandler)();                   /* SPI2                         */                   
    void (*USART1_IRQHandler)();                 /* USART1                       */                   
    void (*USART2_IRQHandler)();                 /* USART2                       */                   
    uint32_t reserved_31;                    
    void (*EXTI15_10_IRQHandler)();              /* External Line[15:10]s        */                          
    void (*RTC_Alarm_IRQHandler)();              /* RTC Alarm (A and B) through EXTI Line */                 
    void (*OTG_FS_WKUP_IRQHandler)();            /* USB OTG FS Wakeup through EXTI line */                       
    uint32_t reserved_8;         
    uint32_t reserved_9;         
    uint32_t reserved_10; 
    uint32_t reserved_11;                           
    void (*DMA1_Stream7_IRQHandler)();           /* DMA1 Stream7                 */                          
    uint32_t reserved_33;                    
    void (*SDIO_IRQHandler)();                   /* SDIO                         */                   
    void (*TIM5_IRQHandler )();                  /* TIM5                         */                   
    void (*SPI3_IRQHandler)();                   /* SPI3                         */                   
    uint32_t reserved_12;                   
    uint32_t reserved_13;                    
    uint32_t reserved_14;                   
    uint32_t reserved_15; 
    void (*DMA2_Stream0_IRQHandler)();           /* DMA2 Stream 0                */                   
    void (*DMA2_Stream1_IRQHandler)();           /* DMA2 Stream 1                */                   
    void  (*DMA2_Stream2_IRQHandler)();           /* DMA2 Stream 2                */                   
    void (*DMA2_Stream3_IRQHandler)();           /* DMA2 Stream 3                */                   
    void (*DMA2_Stream4_IRQHandler)();           /* DMA2 Stream 4                */                   
    uint32_t reserved_16;                    
    uint32_t reserved_17;                      
    uint32_t reserved_18;                         
    uint32_t reserved_19;                          
    uint32_t reserved_20;                           
    uint32_t reserved_21;  
    void (*OTG_FS_IRQHandler)();                 /* USB OTG FS                   */                   
    void (*DMA2_Stream5_IRQHandler)();           /* DMA2 Stream 5                */                   
    void (*DMA2_Stream6_IRQHandler)();           /* DMA2 Stream 6                */                   
    void (*DMA2_Stream7_IRQHandler)();           /* DMA2 Stream 7                */                   
    void (*USART6_IRQHandler)();                 /* USART6                       */                    
    void (*I2C3_EV_IRQHandler)();                /* I2C3 event                   */                          
    void (*I2C3_ER_IRQHandler)();                /* I2C3 error                   */ 
    uint32_t reserved_22;                   
    uint32_t reserved_23;                 
    uint32_t reserved_24;                        
    uint32_t reserved_25;                   
    uint32_t reserved_26;                  
    uint32_t reserved_27;                                                               
    uint32_t reserved_28;
    void (*FPU_IRQHandler)();                    /* FPU                          */
    uint32_t reserved_29;    
    uint32_t reserved_30;
    void (*SPI4_IRQHandler)();                   /* SPI4                         */
};


void Reset_Handler(void)
{




    main();
}
