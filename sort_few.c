/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/24 22:35:13 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	position_node(t_stack *first_node)
{
	if (!next_lower(first_node) && !next_next_lower(first_node))
		return (0);
	else if (next_lower(first_node) && next_next_lower(first_node))
		return (2);
	else
		return (1);
}

//With recursion, execution must pass two times unless case of 1st condition 
void	sort_three(t_stack **stack_a, t_stack **last_a, t_stack **stack_b)
{
	if ((position_node(*stack_a) == 1) && (next_lower(*stack_a)))
		swap_both(stack_a, stack_b);
	else if (position_node(*stack_a) == 2)
		rotate(stack_a, last_a, 'a');
	else
		reverse_rotate(last_a, stack_a, 'a');
}

/*As long as I use here 0 and 1 as position values, sort_five won't work 
 * in larger sort function*/
static void	push_lowest(t_stack **stack_a, t_stack **out, t_stack **last_a)
{
	if ((*stack_a)->position == 0 || (*stack_a)->position == 1)
		push(stack_a, out, 'b');
	else if ((*stack_a)->next->position == 0)
		swap(stack_a, 'a');
	else if ((*last_a)->position == 0)
		reverse_rotate(last_a, stack_a, 'a');
	else if ((*stack_a)->next->position == 1)
		swap(stack_a, 'a');
	else if ((*last_a)->position == 1 || (*last_a)->prev->position == 0
		|| (*last_a)->prev->position == 1)
		reverse_rotate(last_a, stack_a, 'a');
}

void	sort_five(t_stack **stack_a, t_stack **last_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if ((position_node(*stack_a) == 1) && (next_lower(*stack_a)))
		swap(stack_a, 'a');
	else
	{
		while (sort_check(*stack_a) != 1
			&& (*stack_a)->next->next->next)
			push_lowest(stack_a, &stack_b, last_a);
		while (sort_check(*stack_a) != 1)
			sort_three(stack_a, last_a, &stack_b);
		while (stack_b)
			push(stack_a, &stack_b, 'a');
	}
}
