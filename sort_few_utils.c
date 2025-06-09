/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:56:31 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/09 21:15:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//These functions also works as a safe way to check if next node exists or not
int	next_lower(t_stack *node)
{
	if (node && node->next && (node->value > node->next->value))
		return (1);
	return (0);
}

int	next_next_lower(t_stack *node)
{
	if (node && (node->next->next) && (node->value > node->next->next->value))
		return (1);
	return (0);
}
