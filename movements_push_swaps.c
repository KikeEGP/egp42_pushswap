/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push_swaps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/28 18:52:48 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Not only used by pa and pb, but also by parse check_duplicates() 
void	pop_push(t_stack ***stack_in, t_stack ***stack_out)
{
	t_stack	*transition_ptr;

	transition_ptr = **stack_out;
	(**stack_out)->prev = NULL;
	if (**stack_in)
	{
		**stack_out = transition_ptr->next;
		transition_ptr->next = **stack_in;
		(**stack_in)->prev = transition_ptr;
	}
	**stack_in = transition_ptr;
}

/*QUESTION: prints immediatly? OR MAYBE STORES MOVES AND PUTENDL's
ALL AT THE END*/


void	push(t_stack  **stack_a, t_stack **stack_b, int id_stack)
{
	if (id_stack == 'b')
	{
		pop_push(&stack_b, &stack_a);
		ft_putendl("pb");
	}
	if (id_stack == 'a')
	{
		pop_push(&stack_b, &stack_a);
		ft_putendl("pa");
	}
}

void	swap(t_stack ***stack_swapped, int id_stack)
{
	int	aux_value;
	int	aux_position;

	ft_swap(&(**stack_swapped)->value, &(**stack_swapped)->next->value);
	ft_swap(&(**stack_swapped)->position, 
	&(**stack_swapped)->next->position);
	if (id_stack == 'a')
		ft_putendl("sa");
	else
		ft_putendl("sb");
}
/*
Something	swap_both(stack_a,stack_b)
{
	swap(stack_a,¿node?);
	swap(stack_b,¿node?);
	putendl("ss");
}*/
