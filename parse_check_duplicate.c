/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:14:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/22 21:08:57 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int		parse_list_size;
	static int	flag_first_node;

	parse_list_size = stack_size(*parse_list);
	while (parse_list_size-- >= 1)
	{
		iterator = (*parse_list)->next;
		while (iterator)
		{
			if (!comparison_values(parse_list, iterator))
				return (0);
			iterator = iterator->next;
		}
		pop_push(stack_a, parse_list);
		if (!flag_first_node)
		{
			*last = *stack_a;
			flag_first_node = 1;
		}
	}
	debug_list(*stack_a);//debug-> HERE I CHECK THAT ALLOCATION HAS BEEN
	return (1);
}
