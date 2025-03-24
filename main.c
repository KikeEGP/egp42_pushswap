/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/24 20:52:09 by enrgil-p         ###   ########.fr       */
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

static void sort_but_how_many(/*Start thinking about struct for
stacks, size and wrong_cases*/)
{
	if (size_stack <= 5)
		/*Container to function of few arguments*/
	else
		/*Yellow brick road to the EmmerAlgorithm City*/
}

int	main(int argc, char *a_vector[])
{
	t_stack *stack_a;
	t_stack *stack_b;
	//typedef struct to accesory_data or something else. Include below vars
	int		sort_check_result;
	static int	wrong_place;
	static int	size_stack;

	if (argc == 1)
		return (0);
	stack_b = NULL;
	if (!initialize_stack(&stack_a, 0)
		|| !parse_main(argc, a_vector, &stack_a))
		error_happened(stack_a, stack_b);
	sort_check_result = sort_check(&stack_a, &size_stack, &wrong_place); 
	if (sort_check_result <= 0)
	{
		if (sort_check_result == -1)
			sort_but_how_many(/*Hey, use a struct*/);
		else
			error_happened(stack_a, stack_b);
		//How many integers to sort? Check and choose sort_function
	}
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may t_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	free_stacks(stack_a, stack_b);
	exit(EXIT_SUCCESS);/*PMENDEZ- said: exit is to close sons,
	in main this should be a return*/
}
