/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:56:31 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/20 22:09:05 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	next_lower(t_stack *node)
{
	if (node->value > node->next->value)
		return (1);
	return (0);
}

int	next_next_lower(t_stack *node)
{
	if ((node->next->next) && (node->value > node->next->next->value))
		return (1);
	return (0);
}

