/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/23 21:30:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **array)
{
	ft_printf("%p SPLIT before free\n", array);//debug
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	ft_printf("%p SPLIT free\n", array);//debug
}

void	clean_list(t_stack *head)
{
	t_stack	*keeper;

	ft_printf("Inside of clean_list with %p\n", head);//debug
	while (head)
	{
		ft_printf("Value is %d\n", head->value);//debug
		ft_printf("Position is %d\n", head->position);//debug
		keeper = head;
		head = head->next;
		free(keeper);
	ft_printf("Node %p is free\n", head);//debug
	}
	//free(head);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("Clean stacks\n");
	if (stack_b)
		clean_list(stack_b);
	if (stack_a)
		clean_list(stack_a);
}

void	error_argument(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
