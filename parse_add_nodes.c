/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/03 18:20:33 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(void *content)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->position = 0;
	return (new_node);
}

int	add_front(t_stack *head, t_stack *new)
{
	if ((head == NULL || new == NULL) || head->value == new->value)
		return (0);/*Any time is accurate to compare two integers*/
	head->prev = new;/*Check this functions*/
	new->next = head;/*This had *head, and was wrong*/
	*head = *new;/*before was *head = new, and was wrong*/
	return (1);
}

int	add_to_list(int value, t_stack *parse_list)
{
	t_stack	*new_node;/*Will this new_node die here as a local var?*/
	new_node = create_node(value);/*THIS CREATES NEW NODE, NOT LIST*/
	if (!new_node || !add_front(parse_list, new_node))
		return (0);	
	return (1);
}
