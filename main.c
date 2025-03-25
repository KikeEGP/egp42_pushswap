/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/25 18:38:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	initialize_stack(t_stack **new_stack, int value)
{
	*new_stack = (t_stack *)malloc(sizeof(t_stack));
	ft_printf("%p Initialize some node\n", *new_stack);//debug
	if (!new_stack)
		return (0);
	(*new_stack)->value = value;
	(*new_stack)->prev = NULL;
	(*new_stack)->next = NULL;
	(*new_stack)->position = 0;
	return (1);
}

static int	sort_main(t_stack **stack_a, t_stack **stack_b)
{
	int	sort_check_result;
	static int	wrong_place;
	static int	size_stack;
	
	sort_check_result = sort_check(&stack_a, &size_stack, &wrong_place); 
	if (sort_check_result <= 0)
	{
		if (sort_check_result == 0)
			return (0);
		else if (size_stack <= 3)
			/*Container to function of few arguments*/
		else if (size_stack <= 5)
			/*To functions of 4 and 5 arguments*/
		else if (/*Hey, % of wrong_place in size_stack???*/)
			/*Hey, do your stack have less than 10% or 5% 
			of nodes in wrong position? May check here, fella*/
			/*Yellow brick road to the EmmerAlgorithm City*/
	}
}

int	main(int argc, char *a_vector[])
{
	t_stack *stack_a;
	t_stack *stack_b;
	
	if (argc == 1)
		return (0);
	stack_b = NULL;
	if (!initialize_stack(&stack_a, 0)
		|| !parse_main(argc, a_vector, &stack_a)
		|| !sort_main(&stack_a, &stack_b))
		error_happened(stack_a, stack_b);
		/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may t_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	free_stacks(stack_a, stack_b);
	exit(EXIT_SUCCESS);/*PMENDEZ- said: exit is to close sons,
	in main this should be a return*/
}
