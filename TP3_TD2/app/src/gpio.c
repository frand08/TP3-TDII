

/**
 * \file
 * \brief Funciones de gpio
 *
 */
#include "gpio.h"



volatile uint8_t Debounce =0;

/**
 * @brief	ISR del pulsador
 * @return	void
 */
void GPIO_IRQ_HANDLER(void)
{
	//Usa el pin 17 del puerto 0 en modo GPIO
	Chip_GPIOINT_ClearIntStatus(LPC_GPIOINT, GPIO_INTERRUPT_PORT, 1 << GPIO_INTERRUPT_PIN);
	if(!Debounce)
	{
		Board_LED_Toggle(0);
		Debounce = _DEBOUNCE;
	}
}



/**
 * @brief	Configuracion del pulsador
 * @return	void
 */
void GPIO_Config(void)
{

	/* Configure GPIO interrupt pin as input */
	Chip_GPIO_SetPinDIRInput(LPC_GPIO, GPIO_INTERRUPT_PORT, GPIO_INTERRUPT_PIN);

	/* Configure the GPIO interrupt */
	Chip_GPIOINT_SetIntFalling(LPC_GPIOINT, GPIO_INTERRUPT_PORT, 1 << GPIO_INTERRUPT_PIN);

	/* Enable interrupt in the NVIC */
	NVIC_ClearPendingIRQ(GPIO_INTERRUPT_NVIC_NAME);
	NVIC_EnableIRQ(GPIO_INTERRUPT_NVIC_NAME);
}
