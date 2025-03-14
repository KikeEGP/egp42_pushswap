/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/14 22:29:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	initialize_stack(t_stack **new_stack, int value)
{
	*new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		return (0);
	(*new_stack)->value = value;
	(*new_stack)->prev = NULL;
	(*new_stack)->next = NULL;
	(*new_stack)->position = 0;
	return (1);
}

int	main(int argc, char *a_vector[])
{
	t_stack *stack_a;

	if (argc == 1)
		return (0);
	if (!initialize_stack(&stack_a, 0)
		&& !parse_main(argc, a_vector, &stack_a))
		error_argument(/*Just stack_a or stack_a and b*/);
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	exit(EXIT_SUCCESS);/*PMENDEZ- said: exit is to close sons,
	in main this should be a return*/
}
