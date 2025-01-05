/*      *       *       *       */
/*      INCLUDE HEADER HERE     */
/*      *       *       *       */

#include "push_swap.h"

/*OKAY, 5/1/2025
 * we are gonna do as strtol, but with atoi_protected.
 * So, it's not strtol, but we will use here exactly the same
 * as done in ft_strtol*/


/*FUNCTION TO CHECK IF ARE NUMBERS*/
	/*If there can only be numbers, just check arg by arg*/
	/*If there can be a string with numbers, take care of it too*/
	/*Jump spaces. If find a + or -, check if it is correct*/
	/*Then, just isdigit*/

/*FUNCTION TO CREATE INT*/
	/*ft_atoi_protected(), which uses ft_atol() and check if it's integer*/
	/*If it's integer, return or put in stack_a*/
	/*If not, free mem allocated, "Error\n", exit(1)*/
		/*How to check? If it's INT_MAX or INT_MIN, extreme_value()
		 * and use strncmp to see if it's all OK*/

/*Put new integer in a new node of stac_a*/

/*FUNCTION TO COMPARE INTEGERS*/
	/*Compare number of stack with all of others. 
	 * 	Forward or reverse?*/
		/*Forward, maybe before put in stack_a, 
		 * check from first to last if there's the same int*/
