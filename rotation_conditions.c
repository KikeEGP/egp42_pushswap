/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/31 23:45:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_stack_a(t_sort_data *sd)
{
	t_stack	*last_a;

	last_a = *sd->last_a;
	if (is_2nd_lower(*sd->stack_a, last_a)
		&& is_2nd_lower(*sd->stack_a, last_a->prev))
		return (1);
	return (0);
}

int	conditions_rotate_both(t_sort_data *sd)
{
	t_stack	*head_b;

	head_b = *sd->stack_b;
	if (head_b->position > sd->size_a / 4 && conditions_rotate_stack_a(sd))
		return (1);
	return (0);
}

int	conditions_reverse_stack_a(t_sort_data *sd)
{
	t_stack	*last_a;

	last_a = *sd->last_a;
	if (is_2nd_lower(*sd->stack_a, *sd->last_a)
		|| is_2nd_lower(*sd->stack_a, last_a->prev))
		return (1);
	return (0);
}

int	conditions_reverse_stack_b(t_sort_data *sd)
{
	t_stack	*last_b;

	last_b = *sd->last_a;
	if (is_2nd_lower(*sd->last_b, *sd->stack_b)
		|| is_2nd_lower(last_b->prev, *sd->stack_b))
		return (1);
	return (0);
}

int	conditions_reverse_both(t_sort_data *sd)
{
	if (conditions_reverse_stack_a(sd) && conditions_reverse_stack_b(sd))
		return (1);
	return (0);
}
