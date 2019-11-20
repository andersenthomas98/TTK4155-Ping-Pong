/*
 * timer.h
 *
 * Created: 02.10.2019 12:42:56
 *  Author: thoander
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <stdint.h>
/**
*@file
*@brief Timer module. 
*In this project we use timer 0 to limit the CAN-transmission rate (maximum 24 transmissions per second)
*Timer 1 is used for keeping track of the user's score in the ping pong game
*Timer 2 is used to control the game speed in PONG.
*/

/**
*@brief Start timer 0 with prescaler 1024, normal mode.
*/
void timer_0division1024Init(void);

/**
*@brief Set TCNT0 to i
*@param i is the value timer 0 is set to.
*/
void TIM8_WriteTCNT0(uint8_t i);

/**
*@brief Read the value of timer 0.
*/
unsigned int TIM8_ReadTCNT0(void);

/**
*@brief Start timer 1 in CTC mode with prescaler 256.
*/
void timer_1division256Init(void);

/**
*@brief Read the value of timer 2.
*/
unsigned int TIM8_ReadTCNT2(void);

/**
*@brief Set TCNT2 to i
*@param i is the value timer 2 is set to.
*/
void TIM8_WriteTCNT2(uint8_t i);


#endif /* TIMER_H_ */