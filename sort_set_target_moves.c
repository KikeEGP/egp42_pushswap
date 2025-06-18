/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_set_target_moves.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:30:19 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:37:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_target_empty(t_sort_data *sd)
{
	if (!stop_empty_st_a(sd))
	{
		if (sd->quantile > (*sd->stack_a)->position
			&& is_2nd_lower(*sd->last_a, *sd->stack_a)
			&& is_2nd_lower((*sd->last_a)->prev, *sd->stack_a))
			return (1);
		else if ((*sd->stack_a)->position >= sd->quantile
			&& (*sd->last_a)->position >= sd->quantile
			&& (*sd->last_a)->prev->position >= sd->quantile)
			return (0);
		else
			return (2);
	}
	return (-1);
}

int	set_target_return(t_sort_data *sd)
{
	if (!((*sd->stack_b)->position >= sd->quantile
			&& is_2nd_lower(*sd->stack_b, (*sd->stack_a)->next)))
	{
		if (((*sd->last_a)->position != (sd->size_a -1)
				&& is_2nd_lower(*sd->last_a, *sd->stack_b))
			|| is_2nd_lower(*sd->last_b, *sd->stack_b))
			return (2);
		else if (is_2nd_lower(*sd->stack_b, *sd->stack_a))
			return (0);
	}
	return (1);
}
