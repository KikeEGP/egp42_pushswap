/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/02 20:19:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swaop.c"

t_stack	*create_node(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->position = 0;
	return (new_node);
}

int	add_front(t_stack **head, t_stack *new)
{
	if ((head == NULL || new == NULL) || head->value == new->value)
		return (0);/*Any time is accurate to compare two integers*/
	head->prev = new;/*Check this functions*/
	new->next = *head;
	*head = new;
}

int	add_to_list(int value, t_stack parse_list)
{
	t_stack	new_node;
	new_node = create_node(value);/*THIS CREATES NEW NODE, NOT LIST*/
	if (!new_node || !add_front(parse_list, new_node))
		return (0);	
	return (1);
}
