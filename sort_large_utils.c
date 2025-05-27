/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/27 19:41:40 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_quartiles(int size_a, t_sort_data *sort_data)
{
	sort_data->q1 = size_a / 4;
	sort_data->median = size_a / 2;
	sort_data->q3 = sort_data->q1 + sort_data->median;
	sort_data->size_a = size_a;
}

//After push if a stack could start or finish empty after this move 
void	update_last_ptr(t_stack **head, t_stack **last)
{
	if (!(*head))
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
}

int	stop_empty_stack_a(t_sort_data *sort_data)
{
	if (sort_data->size_a - sort_data->size_b == 3)
		return (1);
	return (0);
}

int	set_target_move(t_sort_data *sd, int quartile)
{
	if (quartile > sd->stack_a->position
		&& second_lower(sd->last_a, sd->stack_a)
		&& second_lower(sd->last_a->prev, sd->stack_a))
		return (1);
	else if (sd->stack_a->position > quartile
		&& sd->last_a->position > quartile
		&& sd->last_a->prev->position > quartile)
		return (0);
	else
		return (2);
}
