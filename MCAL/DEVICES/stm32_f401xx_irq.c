
#include "stm32f401xx_irq.h"



uint32_t _sidata;
uint32_t _sdata;
uint32_t _edata;
uint32_t _sbss;
uint32_t _ebss;


void dummy_handler(void)
{


    while(1)
    {

    }

}