/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:14:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/16 22:24:55 by enrgil-p         ###   ########.fr       */
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

int	check_duplicates(t_stack **parse_list, t_stack **stack_a)
{
	t_stack	*iterator;
	int		parse_list_size;

	parse_list_size = stack_size(*parse_list);
	ft_printf("Start Check_duplicate loop\n");//debug->HERE I SEE WHEN I PUSH TO STACK
	while (parse_list_size-- >= 1)
//	while ((*parse_list)->next != NULL)
//	with this loop may have some problem.But check it.
//	What if this one helps ypu tp clean the bug?
	{
		iterator = (*parse_list)->next;
		while (iterator)
		{
			if (!comparison_values(parse_list, iterator))
				return (0);
			iterator = iterator->next;
		}
		pop_push(stack_a, parse_list);
		//(*stack_a)->prev = NULL;
	}
	debug_list(*stack_a);//debug
	return (1);
}
