/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/15 18:27:35 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_front(t_stack **head, t_stack *new)
{
	if ((*head == NULL || new == NULL) || (*head)->value == new->value)
		return (0);/*Any time is accurate to compare two integers*/
	(*head)->prev = new;/*Check this functions*/
	new->next = *head;/*This had *head, and was wrong*/
	*head = new;/*before was *head = new, and was wrong*/
	return (1);
}

int	add_to_list(int value, t_stack **parse_list)
{
	t_stack	*new_node;/*Will this new_node die here as a local var?*/
	/*TASK: create case of parse_list hasn't nodes yet*/
	if (!initialize_stack(&new_node, value) || !add_front(parse_list, new_node))
		return (0);
	return (1);
}
