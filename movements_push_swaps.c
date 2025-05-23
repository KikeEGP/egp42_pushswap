/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push_swaps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/23 22:46:14 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Not only used by pa and pb, but also by parse check_duplicates() 
void	pop_push(t_stack **stack_in, t_stack **stack_out)
{
	t_stack	*transition_ptr;

	transition_ptr = *stack_out;
	*stack_out = transition_ptr->next;
	if (*stack_in == NULL)
		transition_ptr->next = NULL;
	else
	{
		transition_ptr->next = *stack_in;
		(*stack_in)->prev = transition_ptr;
	}
	*stack_in = transition_ptr;
	(*stack_in)->prev = NULL;
	ft_printf("stack_IN check");//debug
	debug_list(*stack_in);//debug
	ft_printf("\tstack_OUT check");//debug
	debug_list(*stack_out);//debug
}

/*If stack_in starts as an empty list and last != NULL, 1st node == last
 * Last is called as NULL just in cases I really don't need it*/
void	push(t_stack **stack_a, t_stack **stack_b, int id_stack)
{
	if (id_stack == 'b')
	{
		pop_push(stack_b, stack_a);
		ft_putendl("pb");
	}
	if (id_stack == 'a')
	{
		pop_push(stack_a, stack_b);
		ft_putendl("pa");
	}
}

void	swap(t_stack **stack_swapped, int id_stack)
{
	t_stack	*transition_ptr;

	transition_ptr = (*stack_swapped)->next;  
	(*stack_swapped)->next = (*stack_swapped)->next->next;
	if ((*stack_swapped)->next)
		(*stack_swapped)->next->prev = *stack_swapped;
	(*stack_swapped)->prev = transition_ptr;
	transition_ptr->next = *stack_swapped;
	transition_ptr->prev = NULL;
	*stack_swapped = transition_ptr;
	if (id_stack == 'a')
		ft_putendl("sa");
	else if (id_stack == 'b')
		ft_putendl("sb");
}

//Call a function 'both' doesn't mean that I have to do both always
void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a || (stack_b && (*stack_b)->next && !next_lower(*stack_b)))
		swap(stack_a, 'a');
	else if (!next_lower(*stack_b) || (stack_a && next_lower(*stack_a)))
		swap(stack_a, 'b');
	else
	{
		if (stack_a)
			swap(stack_a, 0);
		if (stack_b)
			swap(stack_b, 0);
		ft_putendl("ss");
	}
}
