/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/11 18:59:13 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*OKAY, LET'S SEE HOW THIS WORKS*/
int	main(int arg_counter, char *arg_vector[])
{
	static int	a;
	int	*p;

	p = &a;
	ft_printf("Sizeof(int) == %d\n", sizeof(int));
	ft_printf("Sizeof(long) == %d\n", sizeof(long));
	//exit(1);
	ft_printf("p %p, %x\n", p, p);
	ft_printf("a %d\n", a);
	ft_printf("&p %p, %x\n", &p, &p);
	if (arg_counter == 1)
		exit(EXIT_FAILURE);/*In case of no arguments, nothing.*/

	/*In case of 2 or more arguments, you may convert to int*/

	/*PARSE: TARGETS
	 * 	1. Check arguments
	 * 	2. Create stack_a (and stack_b empty but with same size)
	 * 	3. Fill stack_a with integers parsed
	 * 		3.1: in case of error, free, "Error\n" and exit(1)*/	
	
	/*Also, you must check if are correct arguments:
	 * ---integers---
	 * ---not repetead---
	 * ---not exceed integer value---*/
	
	/*IN CASE OF ERROR, printf or putendl "Error\n"*/
	
	/*You must include integers in stack_a. Maybe you can
	 * parse first arguments to check if are correct, and
	 * later create stack_a with malloc, knowing number of
	 * arguments. Remember: LIFO*/
	if (arg_counter == 2)
		ft_printf("Hello %s", arg_vector[1]);
	
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	exit(EXIT_SUCCESS);
}
