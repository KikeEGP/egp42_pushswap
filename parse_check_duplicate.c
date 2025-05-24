/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:14:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/24 19:17:12 by enrgil-p         ###   ########.fr       */
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

int	check_dupl(t_stack **parsed, t_stack **st_a, t_stack **last, int *argc)
{
	t_stack	*iterator;
	
	*argc = 0;
	while (*parsed)
	{
		iterator = (*parsed)->next;
		while (iterator)
		{
			if (!comparison_values(parsed, iterator))
				return (0);
			iterator = iterator->next;
		}
		pop_push(st_a, parsed);
		update_last_ptr(st_a, last);
		*argc += 1;
	}
	debug_list(*st_a);//debug-> HERE I CHECK THAT ALLOCATION HAS BEEN
	return (1);
}
