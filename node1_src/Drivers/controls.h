/**
 * @file
 * @brief Hardware interface
 *
 */


#ifndef CONTROLS_H_
#define CONTROLS_H_

#include <stdint.h>


/**
 * @brief Struct containing position.
 *
 * @param x-position
 * @param y-position
 */
typedef struct {
	int8_t x;
	int8_t y;
} pos_t;



/**
 * @brief Enum defining directions
 *
 */
typedef enum {
	LEFT, RIGHT, UP, DOWN, NEUTRAL
} dir_t;



/**
 * @brief Reading x- and y-position from ADC, to give joystick position.
 *
 * @return Digital position.
 */
pos_t joystick_pos(void);



/**
 * @brief Defining the joysticks position
 *
 * @return Joystick direction
 */
dir_t joystick_dir(void);



/**
 * @brief Sending joystick direction to be used as message over CAN.
 *
 */
void send_joystick_dir(void);



/**
 * @brief Sending joystick position to be used as message over CAN.
 *
 */
void send_joystick_pos(void);



/**
 * @brief Sending message over CAN with values of slider, joystic and button.
 *
 * @param currentSliderValue is the value of the slider
 * @param currentJoystickValue is the value of the joystick
 * @param currentButtonValue is the value of the button
 */
void send_slider_joystick_button(uint8_t currentSliderValue, int currentJoystickValue, int currentButtonValue);



/**
 * @brief Initialization of button.
 *
 */
void btn_init(void);



/**
 * @brief Read right button.
 *
 */
int btn_right(void);



/**
 * @brief Read left button.
 *
 */
int btn_left(void);


#endif /* CONTROLS_H_ */
