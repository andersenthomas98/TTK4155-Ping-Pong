/**
 * @file
 * @brief Driver for the motor functions.
 *
 */


#ifndef MOTOR_H_
#define MOTOR_H_
#include <stdint.h>


/**
 * @brief Initialization of the motor.
 *
 */
void MOTOR_init(void);


/**
 * @brief Sett the speed of the motor.
 * The motor speed is set by an analog value, therefore the value has to be passed through a DAC before the analog value is fed to the motor.
 * @param d is the speed of the digital speed of the motor.
 */
void MOTOR_DAC_write(uint8_t d);


/**
 * @brief Set motor speed and direction.
 *
 * @param speed of motor
 * @param dir is the direction of the motor
 */
void MOTOR_set(uint8_t speed, int dir);



/**
 * @brief Used to read the encoder value
 *
 * @return Value of the encoder
 */
int16_t MOTOR_encoder_read(void);



/**
 * @brief Controll function for motor, PID-regulator.
 *
 */
void MOTOR_control();



/**
 * @brief Autocalibrating of the encoder.
 *
 */
void MOTOR_autocalibrate(void);



/**
 * @brief Reseting the encoder.
 *
 */
void MOTOR_reset_encoder(void);

#endif /* MOTOR_H_ */
