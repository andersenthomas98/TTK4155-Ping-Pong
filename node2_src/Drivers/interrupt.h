/*
 * interrupt.h
 *
 * Created: 11.09.2019 15:28:43
 *  Author: thoander
 */ 



#ifndef INTERRUPT_H_
#define INTERRUPT_H_

 /**
 *@file
 *@brief File for initialization of interrupts. ISR's are located in interrupts.c.
 */

 /**
 *@brief Boolean value indicating if the ADC has sendt an interrupt.
 * The ISR for INT0 sets ADC_INTERRUPT_READY = 1
 */
extern volatile int ADC_INTERRUPT_READY;

extern volatile uint8_t SLIDER_POS;

extern volatile int GAME_START;

/**
*@brief Initialization function for the use of interrupts in node 2.
* Sets up external interrupts on INT2 (interrupt from CAN controller).
*/
void INTERRUPT_init();


#endif /* INTERRUPT_H_ */