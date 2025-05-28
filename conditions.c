/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/28 19:19:11 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_both(t_sort_data *sd)
{
	if (/*You will need this when returning to stack_a*/)
		return (1);
	return (0);
}

int	conditions_reverese_both(t_sort_data *sd)
{
	if ((is_2nd_lower(sd->stack_a, sd->last_a)
			|| is_2nd_lower(sd->stack_a, sd->last_a->prev))
		&& (is_2nd_lower(sd_sd->last_b, sd->stack_b)
			|| !is_2nd_lower(sd->last_b->prev, sd->stack_b)))
		return (1);
	return (0);
}
