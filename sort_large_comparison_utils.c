/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_comparison_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/14 01:07:04 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Here I discovered something: to acces to t_stack elements from sd,
 * you must write (*sd->stack)->element*/
int	below_quartile_1(t_sort_data *sd)
{
	int	quarter;

	quarter = get_quarter(sd->size_a);
	if (sd->size_b >= 2 && quarter / 5 >= (*sd->stack_b)->position)/*next_lower(*sd->stack_b))
	*///	&& !sort_check_worths(*sd->stack_b, *sd->last_b))
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
