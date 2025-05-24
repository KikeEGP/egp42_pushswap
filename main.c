/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/24 19:46:50 by enrgil-p         ###   ########.fr       */
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



static int	sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int argc)
{
	int	sort_check_result;

	sort_check_result = sort_check(*st_a); 
	ft_printf("\tSize is %d\n", argc);//Debug-->Se the size
	while (sort_check_result <= 0)
	{
		if (sort_check_result == 0)
			return (0);
		else if (argc <= 3)
			sort_three(st_a, last_a);
		else if (argc <= 5)
			sort_five(st_a, last_a);
		else 
		{
			st_b = NULL;//MAKEFILE, SHUT UP
			last_a = NULL;//MAKEFILE, SHUT UP
		}
		sort_check_result = sort_check(*st_a);
	}
	ft_printf("\n\n\tWE ARE GONNA GO OUT FROM  SORT_MAIN\n");//debug
	return (1);
}

int	main(int argc, char *a_vector[])
{
	t_stack *stack_a;
	t_stack *last_a;
	t_stack *stack_b;
	
	if (argc == 1)
		return (0);
	stack_a = NULL;
	last_a = NULL;
	stack_b = NULL;
	if (!parse_main(argc, a_vector, &stack_a, &last_a)
			|| !sort(&stack_a, &stack_b, &last_a, argc))
		error_happened(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return(0);
}
