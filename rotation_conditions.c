/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/29 20:37:20 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_stack_a(t_sort_data *sd)
{
	if (is_2nd_lower(sd->stack_a, sd->last_a)
		&& is_2nd_lower(sd->stack_a, sd->last_a->prev))
		return (1);
	return (0);
}

int	conditions_rotate_both(t_sort_data *sd)
{
	if (sd->stack_b > sd->size_a / 4
		&& conditions_rotate_stack_a(sd))
		return (1);
	return (0);
}

int	conditions_reverse_stack_a(t_sort_data *sd)
{
	if (is_2nd_lower(sd->stack_a, sd->last_a)
		|| is_2nd_lower(sd->stack_a, sd->last_a->prev))
		return (1);
	return (0);
}

int	conditions_reverse_stack_b(t_sort_data *sd)
{
	if (is_2nd_lower(sd_sd->last_b, sd->stack_b)
		|| is_2nd_lower(sd->last_b->prev, sd->stack_b))
		return (1);
	return (0);
}

int	conditions_reverese_both(t_sort_data *sd)
{
	if (conditions_reverse_stack_a(sd) && conditions_reverse_stack_b(sd))
		return (1);
	return (0);
}
