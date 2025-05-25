/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/25 19:37:50 by enrgil-p         ###   ########.fr       */
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

int	second_is_lower(t_stack *node_1, t_stack *node_1)
{
	if ((node_1 != node_2) && (node_1->value > node_2->value))
		return (1);
	return (0);
}

//After push if a stack could start or finish empty after this move 
void	update_last_ptr(t_stack **head, t_stack **last)
{
	if (!(*head))
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
}
