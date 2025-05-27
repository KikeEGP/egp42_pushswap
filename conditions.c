/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/27 20:54:06 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_both(t_sort_data *sd)
{
	if(/*You will need this when returning to stack_a*/)
		return (1);
	return (0);
}

int	conditions_reverese_both(t_sort_data *sd)
{
	if ((sd->stack_a && sd->last_a)
		&& (second_lower(sd->stack_a, sd->last_a)
			|| second_lower(sd->stack_a, sd->last_a->prev))
		&& (!second_lower(sd->stack_b, sd->last_b)
			|| !second_lower(sd->stack_b, sd->last_b->prev)))
		return (1);
	return (0);
}
