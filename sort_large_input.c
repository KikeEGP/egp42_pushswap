/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/04 19:21:40 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	include_pointers_in_sort_data(t_sort_data *data,
		t_stack **st_a, t_stack **st_b, t_stack **last_a)
{
	t_stack	*last_b;
	
	last_b = *st_b; /*Think better this*/
	data->stack_a = st_a;
	data->stack_b = st_b;
	data->last_a = last_a;
	data->last_b = &last_b;
}

/*We begin with quarile 2, median. In stack_b, bottom will be for positions
 * below quartile 1, and top for positions between median and q1*/
static void	include_integers_in_sort_data(t_sort_data *data, int size_a)
{
	data->size_a = size_a;
	data->size_b = 0;
	if (size_a % 2 == 0)
		data->quartile = size_a / 2;
	else
		data->quartile = (size_a / 2) + 1;
}

static	int	return_nodes_to_stack_a(t_sort_data *data)
{
	swap_both(data->stack_a, data->stack_b);
	if (is_consecutive(*data->stack_a, *data->stack_b))
	{
		push(data->stack_a, data->stack_b, 'a');
		update_last_ptr(data->stack_b, data->last_b);
		return (1);
	}
	else
		rotate_both(data);
	return (0);
}

static int	empty_stack_a(t_sort_data *data)
{
	ft_printf("\n\n\n\tENTER in empty_stack_a\n");//debug
	if (next_lower(*data->stack_a))
		swap_both(data->stack_a, data->stack_b);
	else if (!set_target_move(data)
		|| head_b_must_go_to_bottom(data))
		rotate_both(data);
	else if (set_target_move(data) == 2)
		reverse_rotate_both(data);
	else if (set_target_move(data) == 1)
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

	include_pointers_in_sort_data(&data, st_a, st_b, last_a);
	include_integers_in_sort_data(&data, size_a);
	while (!stop_empty_stack_a(&data))
	{
		ft_printf("\t\tHEEEEEEYYYYYY\n\n\n\n");//debug
		if (data.quartile > data.size_b && size_a > data.quartile)
			data.quartile += get_quarter(size_a);
		while (!stop_empty_stack_a(&data)
			&& data.size_b < data.quartile)
			data.size_b += empty_stack_a(&data);
	}
	ft_printf("\nEnd of empty_A\n");//debug
	if (size_a - data.size_b <= 3)
	{
		ft_printf("Sort three inside big sort\n");//debug
		while (sort_check(*data.stack_a) == 1)
			sort_three(data.stack_a, data.last_a, data.stack_b);
	}
	while (*data.stack_b)
	{
		data.quartile -= get_quarter(size_a);
		while (data.size_b >= data.quartile)
			data.size_b -= return_nodes_to_stack_a(&data);
	}
	ft_printf("Out of big sort\n");//debug
}
