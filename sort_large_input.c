/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/25 00:52:57 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_lower_values(/*Struct pointers*/, /*Struct quartiles*/)
{
	if (!next_lower(head_a) /*What about stack_b empty or just one node?
	It's made seg.fault before*/)
		swap_both(head_a, head_b);
	else if (head_b->next && next_lower(head_b))
		swap(head_b, 'b');//If swap_both works, this line is not needed
	if ((head_a > last_a) && (last_b > last_a))
	       reverse_rotate_both();
	else if ((head_a > last_a)
			|| (((head_a > last_a->prev)
					&& (last_b > last_a->prev))
				|| (head_a > last_a->prev)))
	{
		reverse_rotate(last_a, head_a);
		return (0);
	}
	if (head_b > head_a)
	{
		push(stack_b, stack_a);
		return (1);
	}
	else
		rotate || (rotate_both (if last_b > head_b));

}

void	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	static int	quartile_1;
	static int	median;
	static int	quartile_3;//May create a struct for quartiles
	int			current_size_b;
	t_stack		*last_b;//Also create a struct for all the pointers

	current_size_b = 0;
	get_quartiles(size_a, &quartile_1, &median, &quartile_3);
	while (current_size_b <= median)
		current_size_b = push_lower_values(/*Struct*/);
	while (current_size_b <= quartile_3)
	{
	}
	while ((size_a - current_size_b) > 3)
	{
	}
}
