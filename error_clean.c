/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/17 20:11:49 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

void	clean_list(t_stack *head)
{
	t_stack	*keeper;

	while (head)
	{
		ft_printf("//	CLEAN %d value\n", head->value);//test_debug
		keeper = head;
		head = keeper->next;
		keeper->next = NULL;
		free(keeper);
	}
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b)
		clean_list(stack_b);
	if (stack_a)
	{
		ft_printf("CLEAN STACK_A <--\n");//debug test
		clean_list(stack_a);
		ft_printf("\n * stack_a has been cleaned *\n");//DEBUGGING
	}
}

void	error_argument(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
