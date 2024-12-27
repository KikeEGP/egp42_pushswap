/*INCLUDE HEADER HERE*/

#include "push_swap.h"

/*OKAY, LET'S SEE HOW THIS WORKS*/
int	main(int arg_count, char *arg_values[])
{
	if (arg_count == 1)
		exit(1);/*In case of no arguments, nothing.*/

	/*In case of 2 or more arguments, you may convert to int*/
	
	/*Also, you must check if are correct arguments:
	 * ---integers---
	 * ---not repetead---
	 * ---not exceed integer value---*/
	
	/*IN CASE OF ERROR, printf or putendl "Error\n"*/
	
	/*You must include integers in stack_a. Maybe you can
	 * parse first arguments to check if are correct, and
	 * later create stack_a with malloc, knowing number of
	 * arguments. Remember: LIFO*/
	if (arg_count == 2)
		ft_printf("Hello %s", arg_values[1]);
	
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	return (0);
}
