/*
 * menu.h
 *
 * Created: 25.09.2019 09:35:39
 *  Author: thoander
 */ 


#ifndef MENU_H_
#define MENU_H_

 /**
 * @file
 * @brief File for menu functions.
 * This includes functions for navigating the menu, and the functions which are run when activated from menu by user.
 */

 /**
 * @brief All items in the menu are menuItem structs
 * @param fun_ptr Function pointer which points to the function to be run when user chooses this menuItem
 * @param num_children Number of children (submenues)
 * @param children Array containing the children (submenues) of this menuItem. Max number of submenues are 8.
 * @param parent Pointer to parent menuItem
 * @param selectedChild Boolean value indicating if this menuItem is selected
 * @param name Name of menuItem. This is also the name seen by the user in the menu system.
 */
typedef struct menuItem {
	void(*fun_ptr)(void);
	int num_children;
	struct menuItem* children[8];
	struct menuItem* parent;
	int selectedChild;
	char *name;
}menu_t, *menu_ptr;

void MENU_init(void);

/**
* @brief Prints the names of all the menuItem's children to the OLED.
* @param item Pointer to a menuItem struct
*/
void MENU_print_children(menu_ptr item);

/**
*@brief Function for navigating the menu with the joystick.
*@param item Pointer to a menuItem struct
*/
void MENU_navigate(menu_ptr item);

/**
*@brief Sets all pixels of the screen when pressed.
* Used as at test function for the menu system.
*/
void MENU_veryFunInvertingFunction();

/**
*@brief Displays an animation to the OLED
* Used as at test function for the menu system.
*/
void MENU_animation();

void MENU_pong();

/**
*@brief Initialize and display the menu system.
* This is where all menuItems are defined.
*/
void MENU_start(void);

/**
*@brief Run this function when "play game" has been selected by the user.
* Runs the ping pong game.
*/
void MENU_playGame();



#endif /* MENU_H_ */