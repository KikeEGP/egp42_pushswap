/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/09 21:07:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_stack *stack)
{
	int		check;

	if (!stack)
		return (0);
	check = 1;
	while (stack->next != NULL && check > 0)
	{
		if (next_lower(stack))
			check = -1;
		stack = stack->next;
	}
	return (check);
}

int	sort_check_worths(t_stack *head_asked, t_stack *last_asked)
{
	if (is_2nd_lower(head_asked->next, head_asked)
		&& is_2nd_lower(last_asked, last_asked->prev)
		&& sort_check(head_asked) == 1)
		return (1);
	return (0);
}

int	check_sort_and_size(t_stack *stack_a, int *size)
{
	int	sort_check_result;

	sort_check_result = sort_check(stack_a);
	if (sort_check_result)
		*size = stack_size(stack_a);
	return (sort_check_result);
}
