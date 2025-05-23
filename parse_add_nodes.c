/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/24 00:11:21 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_front(t_stack **head, t_stack *new)
{
	if ((new == NULL) || (*head)->value == new->value)
		return (0);
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (1);
}

int	add_to_list(int value, t_stack **parse_list)
{
	t_stack		*new_node;
	static int	flag_first_node_created;

	if (!initialize_node(&new_node, value))
		return (0);
	if (!flag_first_node_created)
	{
		*parse_list = new_node;
		flag_first_node_created = 1;
	}
	else if (!add_front(parse_list, new_node))
	{
		free(new_node);
		return (0);
	}
	return (1);
}
