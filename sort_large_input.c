/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/28 18:27:07 by enrgil-p         ###   ########.fr       */
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

static int	empty_stack_a(t_sort_data *data, int quartile)
{
	if (next_lower(data->stack_a))
		swap_both(data->stack_a, data->stack_b);
	if (!set_target_move(data, quartile)
		|| (size_a / 4) > data->stack_b->position)
		rotate_both(data, 1);
	if (set_target_move(data, quartile) == 2)
		reverse_rotate_both(data);
	if (set_target_move(data, quartile) == 1)
	{
		push(data->stack_b, data->stack_a, 'b');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	return (0);
}

int	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	int		quartile;
	t_sort_data	*data;

	quartile = size_a / 4;
	if (!initialize_sort_data(&data, st_a, st_b, last_a))
		return (0);
	while (!stop_empty_stack_a(data))
	{
		quartile += size_a / 4;
		while (!stop_empty_stack_a(data) || data->size_b < quartile/*
		Hey, REMEMBER, WHAT IF YOU DO a function that checks from
		head and from last if a stack is sorted, to see easier 
		if there are some nodes !sorted.
		Imagine, if (next or prev is lower || next or prev is +1 or -1)
		*/)
			data->size_b += empty_stack_a(data, quartile);
		//function that pluses 1 in any pb, sorting inside
	}
	/*sort_three while is stack_a is not sorted
	Are stack_b and a sorted? In that case, just pa in loop
	If not, pa just in case a = b+1, in other case rotate b
	*/free(data);
	return (1);
}
