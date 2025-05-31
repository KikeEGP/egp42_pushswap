/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_comparison_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/31 23:32:41 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	head_b_must_go_to_bottom(t_sort_data *sd)
{
	t_stack	*head;

	head = *sd->stack_b;
	if (sd->size_a / 4 > head->position || sd->quartile > head->position)
		return (1);
	return (0);
}

//Both nodes must exist, point different memory blocks, and 1st node > 2nd node
int	is_2nd_lower(t_stack *node_1, t_stack *node_2)
{
	if (node_1 && node_2 && (node_1 != node_2)
		&& (node_1->value > node_2->value))
		return (1);
	return (0);
}

//If node_2 > node_1, still worth to put together nodes for a swap
int	is_consecutive(t_stack *node_1, t_stack *node_2)
{
	if ((node_1->position - node_2->position == 1)
		|| (node_1->position - node_2->position == -1))
		return (1);
	return (0);
}
