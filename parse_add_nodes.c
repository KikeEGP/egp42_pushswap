/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/15 23:00:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_front(t_stack ***head, t_stack *new)
{
	ft_printf("Add_front compare: %d and %d\n", (**head)->value, new->value);//debug
	if ((**head == NULL || new == NULL) || (**head)->value == new->value)
		return (0);/*Any time is accurate to compare two integers*/
	ft_printf("^^^ADD_FRONT: new value is %d^\n", new->value);//Debug
	(**head)->prev = new;
	new->next = **head;
	**head = new;
	return (1);
}

int	add_to_list(int value, t_stack ***parse_list)
{
	t_stack	*new_node;/*Will this new_node die here as a local var?*/
	/*TASK: create case of parse_list hasn't nodes yet*/
	static int	flag_first_time;
	
	ft_printf("The flag_first time is now %d\n", flag_first_time);
	ft_printf("add_to_list begins here with value %d\n", value);//debug
	if (!initialize_stack(&new_node, value))
		return (0);
	if (!flag_first_time)
	{
		**parse_list = new_node;
		flag_first_time = 1;
		ft_printf("\nparse_list FIRST node, %d. PASS HERE JUST ONE TIME\n", (**parse_list)->value);//debug
		return (1);
	}
	if (!add_front(parse_list, new_node))
	{
		free(new_node);
		return (0);
	}
	return (1);
}
