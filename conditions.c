/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/26 21:15:00 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_reverese_both(t_sort_data *sd)
{
	if ((second_lower(sd->stack_a, sd->last_a)
			|| second_lower(sd->stack_a, sd->last_a->prev))
		&& (!second_lower(sd->stack_b, sd->last_b)
			|| !second_lower(sd->stack_b, sd->last_b->prev)))
		return (1);
	return (0);
}
