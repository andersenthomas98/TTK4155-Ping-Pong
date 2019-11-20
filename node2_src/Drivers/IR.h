/**
 * @file
 * @brief Driver for IR functions used to register game loss
 *
 */


#ifndef INTERNALADC_H_
#define INTERNALADC_H_

/**
 * @brief Initialization of IR
 */
void IR_init(void);


/**
 * @brief Read if there is anything blocking the IR signal.
 */
uint8_t IR_read(void);


#endif /* INTERNALADC_H_ */
