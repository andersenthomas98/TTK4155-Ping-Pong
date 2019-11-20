/*
 * timer.h
 *
 * Created: 06.11.2019 13:24:58
 *  Author: axeltb
 */ 


#ifndef TIMER_H_
#define TIMER_H_

/**
*@file
*@brief Timer module. 
*In this project we use timer 0 in node 2 to keep time. This in turn is used in the PID controller for the motor position. 
*/

/**
*@brief Start timer 0 with prescaler 1024, normalmode.
*/
void timer_0division1024Init(void);

/**
*@brief Set timer 0 to i
*@param i is the value timer 0 is set to.
*/
void TIM8_WriteTCNT0(uint8_t i);

/**
*@brief Read value of timer 0.
*@return current count of timer 0
*/
unsigned int TIM8_ReadTCNT0(void);




#endif /* TIMER_H_ */