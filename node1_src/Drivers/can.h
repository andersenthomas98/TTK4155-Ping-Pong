/**
 * @file
 * @brief High level sending and receiving of CAN messages
 *
 */

#ifndef CAN_H_
#define CAN_H_
#include <stdint.h>

/**
 * @brief Struct of a CAN message
 *
 * @param id of the CAN message
 * @param length of the CAN message
 * @param data to be transmitted
 *
 */

typedef struct CAN_message {
		uint8_t id;
		uint8_t length;
		uint8_t data[8];
}msg_t, *msg_ptr;



/**
 * @brief Initializing CAN
 *
 * @param mode Specify operating mode. When in use the operating mode is MODE_NORMAL.
 *
 */
void CAN_init(uint8_t mode);



/**
 * @brief Sending the CAN message
 *
 * @param msgPtr is a pointer to the message to be sent
 */
void CAN_message_send(msg_ptr msgPtr);



/**
 * @brief Function for recieving the CAN message
 *
 * @return Returning message sent over CAN
 */
msg_t CAN_message_recieve(void);

#endif /* CAN_H_ */
