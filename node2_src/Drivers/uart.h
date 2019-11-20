/**
 * @file
 * @brief Driver for UART interface.
 */


/**
 * @brief Transmit function for sending data over the serial interface.
 * @param data Data to be transmited
 */
void UART_transmit(unsigned char data);



/**
 * @brief Function for recieving data over the serial interface.
 * @return received data
 */
unsigned char UART_receive(void);



/**
 * @brief Initialising UART
 * @param ubrr is calculated by a function given the clk frequency, see more in data sheet.
 */
void UART_init(unsigned int ubrr);
