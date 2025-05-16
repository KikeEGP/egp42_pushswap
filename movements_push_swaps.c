/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push_swaps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/16 22:40:58 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Not only used by pa and pb, but also by parse check_duplicates() 
void	pop_push(t_stack **stack_in, t_stack **stack_out)
{
	t_stack	*transition_ptr;
	static int	flag_first_time;

	transition_ptr = *stack_out;
	*stack_out = transition_ptr->next;
	if (!flag_first_time)
	{
		(*stack_in)->value = transition_ptr->value;
		(*stack_in)->position = transition_ptr->position;
		free(transition_ptr);
		flag_first_time = 1;
	}
	else
	{
		transition_ptr->next = *stack_in;
		(*stack_in)->prev = transition_ptr;
		*stack_in = transition_ptr;
	}
	(*stack_in)->prev = NULL;//BE SURE NEW STACK_HEAD PREV IS NULL
	ft_printf("stack_IN check");//debug
	debug_list(*stack_in);//debug
	ft_printf("\tstack_OUT check");//debug
	debug_list(*stack_out);//debug

}

void	push(t_stack **stack_a, t_stack **stack_b, int id_stack)
{
	if (id_stack == 'b')
	{
		pop_push(stack_b, stack_a);
		ft_putendl("pb");
	}
	if (id_stack == 'a')
	{
		pop_push(stack_b, stack_a);
		ft_putendl("pa");
	}
}

void	swap(t_stack **stack_swapped, int id_stack)
{
	t_stack	*transition_ptr;

	transition_ptr = (*stack_swapped)->next;
	(*stack_swapped)->next = (*stack_swapped)->next->next;
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

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a, 0);
	swap(stack_b, 0);
	ft_putendl("ss");
}
