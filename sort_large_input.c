/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/30 18:14:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	initialize_sort_data(t_sort_data **data,
		t_stack **st_a, t_stack **st_b, t_stack **last_a)
{
	*data = (t_sort_data *)malloc(sizeof(t_sort_data));
	if (!*data)
		return (0);
	(*data)->stack_a = *st_a;
	(*data)->stack_b = *st_b;
	(*data)->last_a = *last_a;
	(*data)->last_b = NULL;
	(*data)->size_a = 0;
	(*data)->size_b = 0;
	return (1);
}

static	int	return_nodes_to_stack_a(t_sort_data **data, int quartile);
{
	swap_both(data->stack_a, data->stack_b);
	if (is_consecutive(data->stack_a, data->stack_b));
	{
		push(data->stack_b, data->stack_a, 'a');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	else
		rotate_both(data, quartile);
	return (0);
}

static int	empty_stack_a(t_sort_data **data, int quartile)
{
	swap_both((*data)->stack_a, &data->stack_b);
	if (!set_target_move_empty_a(*data, quartile)
		|| ((*data)->size_a / 4) > (*data)->stack_b->position)
		rotate_both(data, quartile);
	if (set_target_move_empty_a(*data, quartile) == 2)
		reverse_rotate_both(data);
	if (set_target_move_empty_a(*data, quartile) == 1)
	{
		push(data->stack_b, data->stack_a, 'b');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	return (0);
}

//Quartile sort. push 2 b nodes which position is below current quartile of size
int	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	int			quartile;
	t_sort_data	*data;

	quartile = size_a / 4;
	if (!initialize_sort_data(&data, st_a, st_b, last_a))
		return (0);
	while (!stop_empty_stack_a(data))
	{
		if (size_a > quartile)
			quartile += size_a / 4;
		while (!stop_empty_stack_a(data) || data->size_b < quartile)
			data->size_b += empty_stack_a(&data, quartile);
	}
	while (sort_check(data->stack_a) == 1)
		sort_three(&data->stack_a, &data->last_a, &data->stack_b);
	while (data->stack_b)
	{
		quartile -= size_a / 4;
		while (data->size_b >= quartile)
			data->size_b = return_nodes_to_stack_a(&data, quartile);
	}
	free(data);
	return (1);
}
