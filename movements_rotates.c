/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:06:23 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **first, t_stack **last, int id_stack)
{
	t_stack	*transition_ptr;
	t_stack	*new_first;

	if ((*first)->next)
	{
		new_first = (*first)->next;
		transition_ptr = *first;
		transition_ptr->next = NULL;
		new_first->prev = NULL;
		transition_ptr->prev = *last;
		(*last)->next = transition_ptr;
		*last = transition_ptr;
		*first = new_first;
		if (id_stack == 'a')
			ft_putendl("ra");
		else if (id_stack == 'b')
			ft_putendl("rb");
	}
}

void	rotate_both(t_sort_data *sd)
{
	if (conditions_rotate_both(sd) || (st_a_lower_than_quantile(sd)
			&& st_b_below_quantile_1(sd)
			&& is_2nd_lower((*sd->stack_b)->next, *sd->stack_b)))
	{
		rotate(sd->stack_a, sd->last_a, 0);
		rotate(sd->stack_b, sd->last_b, 0);
		ft_putendl("rr");
	}
	else if (st_a_lower_than_quantile(sd))
		rotate(sd->stack_a, sd->last_a, 'a');
	else if ((st_b_below_quantile_1(sd))
		&& is_2nd_lower((*sd->stack_b)->next, *sd->stack_b))
		rotate(sd->stack_b, sd->last_b, 'b');
}

void	reverse_rotate(t_stack **last, t_stack **first, int id_stack)
{
	t_stack	*transition_ptr;
	t_stack	*new_last;

	if ((*last)->prev)
	{
		new_last = (*last)->prev;
		transition_ptr = *last;
		transition_ptr->next = *first;
		(*first)->prev = transition_ptr;
		transition_ptr->prev = NULL;
		new_last->next = NULL;
		*first = transition_ptr;
		*last = new_last;
		if (id_stack == 'a')
			ft_putendl("rra");
		else if (id_stack == 'b')
			ft_putendl("rrb");
	}
}

void	reverse_rotate_both(t_sort_data *sd)
{
	if (conditions_reverse_both(sd))
	{
		reverse_rotate(sd->last_a, sd->stack_a, 0);
		reverse_rotate(sd->last_b, sd->stack_b, 0);
		ft_putendl("rrr");
	}
	else if (conditions_reverse_stack_a(sd))
		reverse_rotate(sd->last_a, sd->stack_a, 'a');
	else if (conditions_reverse_stack_b(sd))
		reverse_rotate(sd->last_b, sd->stack_b, 'b');
}
