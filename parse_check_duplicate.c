/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:14:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/03 17:16:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//If two integers are not equal, modifies and set the expected position
static int	comparison_values(t_stack **parse_list, t_stack *iterator)
{
	if ((*parse_list)->value == iterator->value)
		return (0);
	if ((*parse_list)->value > iterator->value)
		(*parse_list)->position++;
	else if ((*parse_list)->value < iterator->value)
		iterator->position++;
	return (1);
}

int	check_duplicate(t_stack **parse_list, t_stack **stack_a, t_stack **last)
{
	t_stack	*iterator;

	while (*parse_list)
	{
		iterator = (*parse_list)->next;
		while (iterator)
		{
			if (!comparison_values(parse_list, iterator))
				return (0);
			iterator = iterator->next;
		}
		pop_push(stack_a, parse_list);
		update_last_ptr(stack_a, last);
	}
	return (1);
}
