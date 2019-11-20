/**
 * @file
 * @brief Driver connecting the OLED display on the USB Multifunction card to the
 * MCU’s parallel bus interface
 */

#include <stdint.h>

#ifndef OLED_H_
#define OLED_H_


/**
 * @brief Initialisation of OLED
 */
void OLED_init(void);


/**
 * @brief Defining next position
 *
 * @param page position
 * @param col position
 *
 */
void OLED_pos(uint8_t page, uint8_t col);



/**
 * @brief Printing data from program memory to SRAM
 *
 * @param offset says where to print
 * @param c is the char to print
 */
void OLED_print_char(char c, int offset);



/**
 * @brief Print string
 *
 * @param offset says where to print the string
 * @param c is character in string
 *
 */
void OLED_print_string(char *c, int offset);



/**
 * @brief Clearing all data written to SRAM
 *
 */
void OLED_clearAll(void);



/**
 * @brief Setting level of brightness
 *
 * @param level of brightnes
 */
void OLED_setBrightness(uint8_t level);



/**
 * @brief Seting pixel on OLED screen
 *
 * @param x position of pixel
 * @param y position of pixel
 */
void OLED_set_pixel(int x, int y);



/**
 * @brief Reseting pixel on OLED screen
 *
 * @param x position of pixel
 * @param y position of pixel
 */
void OLED_reset_pixel(int x, int y);



/**
 * @brief Printing from SRAM to OLED
 */
void OLED_refresh(void);



#endif /* OLED_H_ */
