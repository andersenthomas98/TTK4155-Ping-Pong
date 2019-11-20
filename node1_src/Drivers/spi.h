/**
 * @file
 * @brief SPI communication driver
 */

#ifndef SPI_H_
#define SPI_H_
#include <stdint.h>


/**
 * @brief Initialize SPI communication. Set the microcontroller as master and the CAN-controller as slave.
 */
void SPI_MasterInit(void);


/**
 * @brief Transmitting data over the SPI by setting the SPI dataregister, SPDR.
 *
 * @param 8 bit data to be transmited
 *
 */
void SPI_transmit(uint8_t data);



/**
 * @brief Reading data transmitted over the SPI. The flag SPIF is set high when data is beeing
 * transmitted, and reset in the SPSR register when accessing SPDR.
 *
 * @return The data register SPDR
 */
uint8_t SPI_read(void);


#endif /* SPI_H_ */
