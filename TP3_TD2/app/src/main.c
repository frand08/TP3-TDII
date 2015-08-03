/**
 * \mainpage
 * \section intro_sec Introduccion
 *
 * TP3 de Tecnicas Digitales 2
 *
 * \section Descripcion
 *
 * Programa que hace destellar el LED del stick LPCXpresso\n
 * cada vez que se presiona un pulsador determinado. (P0.17)
 */


/**
 * \file
 * \brief Archivo principal
 *
 */

#include "main.h"


/**
 * @brief	Funcion principal.
 * Se encarga de las inicializaciones y queda esperando a la interrupcion.
 * @return	0
 */
int main(void)
{

	/* Generic Initialization */
	SystemCoreClockUpdate();

	/* Board_Init calls Chip_GPIO_Init and enables GPIO clock if needed,
	   Chip_GPIO_Init is not called again */
	Board_Init();
	Board_LED_Set(0, false);
	Setup_SysTick();
	GPIO_Config();
	/* Wait for interrupts - LED will toggle on each wakeup event */
	while (1) {
		__WFI();
	}

	return 0;
}

