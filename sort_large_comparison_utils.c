/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_comparison_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:28:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Here I discovered something: to acces to t_stack elements from sd,
 * you must write (*sd->stack)->element*/
int	st_b_below_quantile_1(t_sort_data *sd)
{
	int	lower_values;

	lower_values = get_quarter(sd->size_a);
	if (sd->size_b >= 2 && lower_values >= (*sd->stack_b)->position)
		return (1);
	return (0);
}

int	st_a_lower_than_quantile(t_sort_data *sd)
{
	if ((*sd->stack_a)->position >= sd->quantile
		&& (*sd->last_a)->position >= sd->quantile
		&& (*sd->last_a)->prev->position >= sd->quantile)
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
