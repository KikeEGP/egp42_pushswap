/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_set_target_moves.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:30:19 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/09 20:06:51 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_target_empty(t_sort_data *sd)
{
	ft_printf("SET_TAGET\n");//debug
	if (!stop_empty_st_a(sd))
	{
		ft_printf("CHECK NEXT TARGET MOVE\n");//debug
		if (sd->quartile > (*sd->stack_a)->position
			&& is_2nd_lower(*sd->last_a, *sd->stack_a)
			&& is_2nd_lower((*sd->last_a)->prev, *sd->stack_a))
			return (1);
		else if ((*sd->stack_a)->position >= sd->quartile
			&& (*sd->last_a)->position >= sd->quartile
			&& (*sd->last_a)->prev->position >= sd->quartile)
			return (0);
		else
			return (2);
	}
	return (-1);
}

int	set_target_return(t_sort_data *sd)
{
	if (is_consecutive(*sd->stack_a, *sd->stack_b))
		return (1);
	else if (is_consecutive(*sd->stack_a, (*sd->last_b)->prev)
		|| is_consecutive(*sd->stack_a, *sd->last_b)
		|| is_2nd_lower(*sd->last_b, *sd->stack_b))
		return (2);
	else 
		return (0);
}
