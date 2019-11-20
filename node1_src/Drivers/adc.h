/**
 * @file
 * @brief Driver for A/D converting from joystick.
 *
 */

#include <stdint.h>

#ifndef ADC_H_
#define ADC_H_

/**
 *@brief The function reads the A/D transferred value of the x possition from the joystick.
 *
 *@return the digital value of the joystic´s x possition
 */
uint8_t ADC_read_x(void);



/**
 *The function reads the A/D transferred value of the y possition from the joystick.
 *
 *@return the digital value of the joystic´s y possition
 */
uint8_t ADC_read_y(void);



/**
 *The function reads the A/D transferred value of the left slider from the joystick.
 *
 *@return the digital value of the left slider.
 */
uint8_t ADC_slider_left(void);


/**
 *The function reads the A/D transferred value of the right slider from the joystick.
 *
 *@return the digital value of the right slider.
 */
uint8_t ADC_slider_right(void);

#endif /* ADC_H_ */
