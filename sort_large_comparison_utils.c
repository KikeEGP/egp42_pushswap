/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_comparison_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/04 19:27:11 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Here I discovered something: to acces to t_stack elements from sd,
 * you must write (*sd->stack)->element*/
int	head_b_must_go_to_bottom(t_sort_data *sd)
{
	int	quarter;

	quarter = get_quarter(sd->size_a)
	ft_printf("\n\n\n\nHEAD_B\n\n");//debug
	if (*sd->stack_b && (quarter > (*sd->stack_b)->position
		|| sd->quartile > (*sd->stack_b)->position))
		return (1);
	return (0);
}

//Both nodes must exist, point different memory blocks, and 1st node > 2nd node
int	is_2nd_lower(t_stack *node_1, t_stack *node_2)
{
	ft_printf("\tEnter is_2nd_lower\n");//debug
	ft_printf("Node 1 is %p and it's value %d\n", node_1, node_1->value);//debug
	ft_printf("Node 2 is %p and it's value %d\n", node_2, node_2->value);//debug
	if (node_1 && node_2 && (node_1 != node_2)
		&& (node_1->value > node_2->value))
		return (1);
	ft_printf("Second node is not lower or there is a problem\n");//debug
	return (0);
}

//If node_2 > node_1, still worth to put together nodes for a swap
int	is_consecutive(t_stack *node_1, t_stack *node_2)
{
	if ((node_1->position - node_2->position == 1)
		|| (node_1->position - node_2->position == -1))
		return (1);
	return (0);
}
