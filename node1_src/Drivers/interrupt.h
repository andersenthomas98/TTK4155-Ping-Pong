/*
 * interrupt.h
 *
 * Created: 11.09.2019 15:28:43
 *  Author: thoander
 */ 

 /**
 *@file
 *@brief File for setup of interrupts.
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

/**
*@brief Global variable used to indicate whether the ADC has sendt an interrupt.
* The ISR sets ADC_INTERRUPT_READY = 1
*/
extern volatile int ADC_INTERRUPT_READY;

/**
*@brief Global variable used to hold the game score. 
*The game score is updated every second by a timer interrupt.  
*/
extern volatile int GAME_SCORE;
/**
*@brief Global variable used to indicate if the user has lost
*/
extern volatile int GAME_OVER;

//extern volatile int SPI_TRANSMISSION_COMPLETE;
/**
*@brief Set up INT0 for external interrupt from ADC and INT1 for external interrupt from CAN-controller.
*/
void INTERRUPT_init();


#endif /* INTERRUPT_H_ */