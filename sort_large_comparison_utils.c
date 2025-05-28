/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_comparison_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/28 19:13:46 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//Both nodes must exist, point different memory blocks, and 1st node > 2nd node
int	is_2nd_lower(t_stack *node_1, t_stack *node_2)
{
	if (node_1 && node_2 && (node_1 != node_2)
			&& (node_1->value > node_2->value))
		return (1);
	return (0);
}

int	is_consecutive(t_stack *node_1, t_stack *node_2)
{
	if ((node_1->position - node_2->position == 1)
		|| (node_1->position - node_2->position == -1))
		return (1);
	return (0);/*Do not split these, manage together*/
}
