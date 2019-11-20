/**
 * @file
 * @brief Driver for PMW in
 *
 */


#ifndef PWM_H_
#define PWM_H_

/**
 * @brief Initialization of PMW.
 * In this project we use PWM to control the servo of the motor.
 */
void PWM_init(void);


/**
 * @brief Setting duty cycle of PMW, it is automaticly set at new period.
 *
 * @param duty_cycle is the duty cycle to be set
 */
void PWM_set_duty_cycle(unsigned int duty_cycle);




#endif /* PWM_H_ */
