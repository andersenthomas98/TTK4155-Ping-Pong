/**
 * @file
 * @brief Driver for the External Memory.
 *
 */


#ifndef XMEM_H_
#define XMEM_H_
#include <stdint.h>

/**
 * @brief Initialization of XMEM.
 *
 */
void XMEM_init(void);


/**
 * @brief Reading data at given address in external memory
 *
 * @param address to read from
 *
 * @return data at given address in XMEM
 */
uint8_t XMEM_read(uint16_t address);



/**
 * @brief Writing given data to given address
 *
 * @param data to be written to address
 * @param address write to this address
 *
 */
void XMEM_write(uint8_t data, uint16_t address);



/**
 * @brief Test function for SRAM
 *
 */
void SRAM_test(void);




#endif /* XMEM_H_ */
