/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/01 15:59:20 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void debug_list(t_stack *node)
{//THIS FUNCTION IS TO DEBUG, DO NOT SEND THIS

	ft_printf("\n\n\n---> OPEN DEBUG FUNCTION <---\n");//debug,
	while (node)
	{
		ft_printf("Node %p, elements are: ", node);
		ft_printf("Prev is %p, ", node->prev);
		ft_printf("Next is %p, ", node->next);
		ft_printf("Value is %d, ", node->value);
		ft_printf("and Position is %d\n", node->position);
		node = node->next;
	}
	ft_printf("---> CLOSE DEBUG FUNCTION <---\n\n\n");/*debug,
			like all the function*/
	//REMOVE THIS FUNCTION and PROTOTYPE, WHICH IS IN DEFINITIONS
}



static int	sort(t_stack **stack_a, t_stack **stack_b, t_stack **last_a)
{
	int	sort_check_result;
	int	size_a;

	sort_check_result = check_sort_and_size(*stack_a, &size_a);
	while (sort_check_result <= 0)
	{
		if (sort_check_result == 0)
			return (0);
		else if (size_a <= 3)
			sort_three(stack_a, last_a, NULL);
		else if (size_a <= 5)
			sort_five(stack_a, last_a);
		else
			big_sort(stack_a, stack_b, last_a, size_a);
		ft_printf("End of SORT loop. Once more again?\n");//denbug
		sort_check_result = sort_check(*stack_a);
	}
	ft_printf("\n\n\tWE ARE GONNA GO OUT FROM  SORT_MAIN\n");//debug
	return (1);
}

int	main(int argc, char *a_vector[])
{
	t_stack	*stack_a;
	t_stack	*last_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	stack_a = NULL;
	last_a = NULL;
	stack_b = NULL;
	if (!parse_main(argc, a_vector, &stack_a, &last_a)
		|| !sort(&stack_a, &stack_b, &last_a))
		error_happened(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return (0);
}
