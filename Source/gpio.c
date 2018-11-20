//------------------------------------------------------------------------------
// Description:
//   General-purpose I/O (GPIO)
//   Alternate-function I/O  (AFIO)
//
//
//   Subrountines:
//     gpio_init
//
//   Functions:
//     None
//
//   Interrupts:
//     None
//
//
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
//  Includes Files
//------------------------------------------------------------------------------
#include "stm32f4xx.h"
#include "gpio.h"




//------------------------------------------------------------------------------
// Function Name  : gpio_init
// Description    : Initializes IO pins
// Input          : None
// Output         : None
// Return         : None
//------------------------------------------------------------------------------
void gpio_init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  // GPIO Ports Clock Enable
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  // Configure GPIO pin Output Level
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  // Configure GPIO pin : PtPin
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  // Configure GPIO pin : PtPin
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

}


