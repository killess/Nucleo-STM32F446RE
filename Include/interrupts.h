#ifndef __INTERRUPTS_H
#define __INTERRUPTS_H


#include "stm32f4xx.h"












//------------------------------------------------------------------------------
// Prototypes
//------------------------------------------------------------------------------
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);



#endif /* __INTERRUPTS_H */

