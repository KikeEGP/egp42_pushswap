/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/19 20:43:49 by enrgil-p         ###   ########.fr       */
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

int	initialize_stack(t_stack **new_stack, int value)
{
	*new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		return (0);
	ft_printf("%p Initialize some node, ", *new_stack);/*debug
	You need to debug here. With pointers malloc you can see which one
	does not be free at the end. And as long as I can remember,
	leak was in parse_list*/
	(*new_stack)->value = value;
	ft_printf("value is %d\n", (*new_stack)->value);//debug
	(*new_stack)->prev = NULL;
	(*new_stack)->next = NULL;
	(*new_stack)->position = 0;
	return (1);
}

static int	sort_main(t_stack **stack_a, t_stack *stack_b)
{
	int	sort_check_result;
	int	size_stack;

	stack_b = NULL;//DELETE THIS, IS TESTING	
	sort_check_result = check_sort_and_size(*stack_a, &size_stack); 
	ft_printf("\tSize is %d\n", size_stack);//Debug-->Se the size
	while (sort_check_result <= 0)
	{
		if (sort_check_result == 0)
			return (0);
		else if (size_stack <= 3)
			sort_three(stack_a);//Here works WELL
		else if (size_stack <= 5)
			sort_five(stack_a);//Here works WELL
			/*To functions of 4 and 5 arguments*/
	//	else if (/*Hey, % of wrong_place in size_stack???*/)
			/*Hey, do your stack have less than 10% or 5% 
			of nodes in wrong position? May check here, fella*/
			/*Yellow brick road to the EmmerAlgorithm City*/
		//sort_main(stack_a, stack_b);
		sort_check_result = sort_check(*stack_a);
	}
	ft_printf("\n\n\tWE ARE GONNA GO OUT FROM  SORT_MAIN\n");//debug
	return (1);
}

int	main(int argc, char *a_vector[])
{
	t_stack *stack_a;
	t_stack *stack_b;
	
	if (argc == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (!parse_main(argc, a_vector, &stack_a)
			|| !sort_main(&stack_a, stack_b))
		error_happened(stack_a, stack_b);
	free_stacks(&stack_a, &stack_b);
	return(0);
}
