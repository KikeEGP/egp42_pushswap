/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/25 19:23:41 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	initialize_sort_data(t_sort_data **data,
		t_stack **st_a, t_stack **st_b, t_stack **last_a)
{
	*data = (t_sort_data *)malloc(sizeof(t_sort_data));
	if (!*data)
		return (0);
	(*data)->q1 = 0;
	(*data)->median = 0;
	(*data)->q3 = 0;
	(*data)->stack_a = *st_a;
	(*data)->stack_b = *st_b;
	(*data)->last_a = *last_a;
	(*data)->last_b = NULL;
	(*data)->size_a = 0;
	(*data)->size_b = 0;
	return (1);
}

int	push_lower_values(t_sort_data *data)
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

int	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	t_sort_data	*sort_data;

	if (!initialize_sort_data(&sort_data, st_a, st_b, last_a))
		return (0);
	get_quartiles(size_a, sort_data);
	while (sort_data->size_b <= median)
		sort_data->size_b += push_lower_values(data);
	while (current_size_b <= quartile_3)
	{
	}
	while ((size_a - current_size_b) > 3)
	{
	}
	free(data);
	return (1);
}
