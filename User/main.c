/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */  

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"

void 	initIO(){
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;  
	GPIO_InitStructure.GPIO_Speed =  GPIO_Speed_50MHz;

	GPIO_Init( GPIOA ,&GPIO_InitStructure);
}

void Bell_On(){
  GPIO_SetBits(GPIOA , GPIO_Pin_8);
}

void Bell_Off(){
  GPIO_ResetBits(GPIOA , GPIO_Pin_8);
}

int main(void)
{
	initIO();
	
	Bell_On();
}




// Bell PA8
//.\Objects\Output\NewTest.sct(7): error: L6235E: More than one section matches selector - cannot all be FIRST/LAST.
//.\Objects\Output\NewTest.axf: Error: L6218E: Undefined symbol assert_param (referred from misc.o).
