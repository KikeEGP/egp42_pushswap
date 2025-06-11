/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_set_target_moves.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:30:19 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/11 20:09:21 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_target_empty(t_sort_data *sd)
{
	if (!stop_empty_st_a(sd))
	{
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

/*static int	set_nearby(t_sort_data *sd)
{
	int	head;
	int	head_next;
	int	last;
	int	last_prev;
	int	head_a;

	head = (*sd->stack_b)->position;
	head_next = (*sd->stack_b)->next->position;
	last = (*sd->last_b)->position;
	last_prev = (*sd->last_b)->prev->position;
	head_a = (*sd->stack_a)->position;
	if ((head_a - last || head_a - last_prev) > (head_a - head))
		return (1);
	return (0);
}*/

/*static int	rotate_direction(t_sort_data *sd)
{
	if ((*sd->last_b)->prev->position >= sd->quartile)
		return (1);
	return (0);
}*/

int	set_target_return(t_sort_data *sd)
{
	if (is_consecutive(*sd->stack_a, *sd->stack_b))
		return (1);
	else if (is_consecutive(*sd->stack_a, (*sd->last_b)->prev)
		|| is_consecutive(*sd->stack_a, *sd->last_b))
	//	|| rotate_direction(sd))
		/*|| ((*sd->last_b)->position > sd->quartile
			&& is_2nd_lower(*sd->last_b, *sd->stack_b)))*/
		return (2);
	else
		return (0);
}
