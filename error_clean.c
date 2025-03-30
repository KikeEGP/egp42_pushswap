/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/30 17:51:16 by enrgil-p         ###   ########.fr       */
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
		keeper = head;
		head = head->next;
		free(keeper);
	}
	//free(head);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b)
		clean_list(stack_b);
	if (stack_a)
		clean_list(stack_a);
}

void	error_happened(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
