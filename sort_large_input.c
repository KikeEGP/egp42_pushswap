/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/16 19:00:20 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	include_outer_data(t_sort_data *data, t_stack **st_a,
		t_stack **st_b, t_stack **last_a)
{
	data->stack_a = st_a;
	data->stack_b = st_b;
	data->last_a = last_a;
}

/*We begin with quarile 2, median. In stack_b, bottom will be for positions
 * below quartile 1, and top for positions between median and q1*/
static void	include_new_data(t_sort_data *sd, int size_a, t_stack **last_b)
{
	sd->last_b = last_b;
	sd->size_a = size_a;
	sd->size_b = 0;
	if (size_a % 2 == 0)
		sd->quartile = size_a / 4;
	else
		sd->quartile = (size_a / 4) + 1;
}

static	int	return_nodes_to_stack_a(t_sort_data *data)
{
	int	target_move;
/*HOW CAN I MAKE ROTATE IN CASE BELOW QUARTILE???*/
	target_move = set_target_return(data);
	if (data->quartile > (*data->stack_b)->position 
		&& target_move == 1)
		rotate(data->stack_b, data->last_b, 'b');
	else if (is_2nd_lower((*data->stack_b)->next, *data->stack_b)
		&& (*data->stack_b)->position >= data->quartile)
		swap_both(data->stack_a, data->stack_b);
	else if (is_2nd_lower(*data->stack_b, *data->stack_a))
		rotate(data->stack_a, data->last_a, 'a');
	else if (target_move == 2)
		reverse_rotate_both(data);
	else if (target_move == 1)
	{
		push(data->stack_a, data->stack_b, 'a');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	return (0);
}

static int	empty_stack_a(t_sort_data *data)
{
	int	target_move;

	target_move = set_target_empty(data);
	if ((next_lower(*data->stack_a) && target_move > 1
		&& data->quartile >= (*data->stack_a)->position))
		swap_both(data->stack_a, data->stack_b);
	else if (!target_move || (below_quartile_1(data)
			&& !next_lower(*data->stack_b)))
		rotate_both(data);
	else if (target_move == 2)
		reverse_rotate_both(data);
	else if (target_move == 3)
		rotate(data->stack_b, data->last_b, 'b');
	else if (target_move == 1)
	{
		push(data->stack_a, data->stack_b, 'b');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	return (0);
}

//Quartile sort. push 2 b nodes which position is below current quartile of size
void	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	t_sort_data	data;
	t_stack		*last_b;

	last_b = NULL;
	include_outer_data(&data, st_a, st_b, last_a);
	include_new_data(&data, size_a, &last_b);
	while (!stop_empty_st_a(&data))
	{
		if (data.size_b >= data.quartile)
			data.quartile += get_quarter(size_a);
		data.size_b += empty_stack_a(&data);
	}
	while (size_a - data.size_b <= 3 && sort_check(*data.stack_a) != 1)
		sort_three(data.stack_a, data.last_a, data.stack_b);
	while (*data.stack_b)
	{
		if (data.quartile >= data.size_b)
			data.quartile -= get_quarter(size_a);
		data.size_b -= return_nodes_to_stack_a(&data);
	}
}
