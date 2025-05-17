/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/17 22:12:40 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//With recursion, execution must pass two times unless case of 1st condition 
void	sort_three(t_stack **stack_a)
{
	t_stack	*last;

	ft_printf("Before sort_three, first is %d\n", (*stack_a)->value);//debug
	last = NULL;
	last = (*stack_a)->next->next;
	if (((*stack_a)->position == 1 
		&& (*stack_a)->next->position == 0))
	{
		swap(stack_a, 'a');//creta sa() to try this
		ft_printf("After swa, first is %d\n", (*stack_a)->value);//debug
	}
	else if ((*stack_a)->position == 2)
	{
		rotate(stack_a, &last, 'a');//create ra() to try this
		ft_printf("After rot, first is %d\n", (*stack_a)->value);//debug
	}
	else
		reverse_rotate(&last, stack_a, 'a');//same as above
}

static void	push_lowest(stack_a, &stack_b)
{
}

void	sort_five(t_stack **stack_a)
{
	t_stack	*stack_b;
	t_stack	*last_a;

	stack_b = NULL;
	last_a = stack_last(*stack_a);
	while (stack_size(*stack_a) == 3)
		push_lowest(stack_a, &stack_b);
	while (sort_check(*stack_a, NULL, NULL) == 1)
		sort_three(stack_a);
	if(stack_b->next && (stack_b->next->position > stack_b->position))
		swap(&stack_b, 'b');
	while (stack_b)
		push(stack_a, &stack_b, 'a');
}
/*Place to create functions for arguments <= 3, 4 or 5. 
 *
 * Remember, max 2 movs with 3 values. 12 moves max in cas of 5*/
