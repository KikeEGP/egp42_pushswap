/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:25:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/22 20:58:02 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *lst)
{
	t_stack	*last_node;

	if (!lst)
		return (NULL);
	last_node = lst;
	while (last_node->next != NULL)
		last_node = last_node->next;
	return (last_node);
}
