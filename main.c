/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/10 19:24:27 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initialize_stack(t_stack *new_stack)
{
	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->value = 0;
	new_stack->prev = NULL;
	new_stack->next = NULL;
	new_stack->position = 0;
	return (new_stack);
}

int	main(int a_counter, char *a_vector[])
{
	t_stack *stack_a;

	if (a_counter == 1)
		return (0);
	stack_a = initialize(stack_a);/*IS THIS CORRECT??*/
	if (!stack_a)
		exit(EXIT_FAILURE);
	stack_a = parse_main(a_counter, a_vector, stack_a);
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	exit(EXIT_SUCCESS);
}
