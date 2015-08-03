/**
 * \file
 * \brief Defines y prototipos de systick
 */

#ifndef _SYSTICK_H_
#define _SYSTICK_H_

#include "board.h"
#include "chip.h"

#define CLOCK_DIVIDER 10 //usado para configurar el SysTick

void Setup_SysTick(void);

void SysTick_Handler(void);

#endif
