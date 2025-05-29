/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/29 19:00:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **first, t_stack **last, int id_stack)
{
	t_stack	*transition_ptr;
	t_stack	*new_first;

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

void	rotate_both(t_sort_data *sd, int flag_empty_st_a)
{
	if (flag_empty_st_a || conditions_rotate_both(sd))
	{
		rotate(sd->stack_a, sd->last_a, 0);
		rotate(sd->stack_b, sd->last_b, 0);
		putendl("rr");
	}
}

void	reverse_rotate(t_stack **last, t_stack **first, int id_stack)
{
	t_stack	*transition_ptr;
	t_stack	*new_last;

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

void	reverse_rotate_both(t_sort_data *sd)
{
	if (conditions_reverse_both(sd))
	{
		reverse_rotate(sd->last_a, sd->stack_a, 0);
		reverse_rotate(sd->last_b, sd->stack_b, 0);
		putendl("rrr");
	}
	else if (conditions_reverse_stack_a(sd))
		reverse_rotate(sd->last_a, sd->stack_a, 'a');
	else if (conditions_reverse_stack_b(sd))
		reverse_rotate(sd->last_b, sd->stack_b, 'b');
}
