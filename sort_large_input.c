/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/26 20:21:19 by enrgil-p         ###   ########.fr       */
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

static int	empty_stack_a(t_sort_data *data, int quartile)
{
	if (next_lower(data->stack_a))
		swap_both(data->stack_a, data->stack_b);/*With this, will only
	do swap in case of check stack_a is correct. 
	But what if swap_both return 1 or 0 in case of what it has done?*/
//
//Imagine...
	/*if (!swap_both() || !rotate_both() || !reverse_rotate_both())
	 * {
	 * 	push(data->stack_a, data->stack_b, 'b');
	 * 	return (1);
	 * }
	 * */
//
//	reviewing conditions to select move, to push to b
//	return (1); in case of push to b. If not, return (0);
	return (0);//With else if, just push will return (1)
}

int	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
{
	t_sort_data	*data;
	int		quartile;
	int		stop_flag;

	quartile = size_a / 4;
	if (!initialize_sort_data(&data, st_a, st_b, last_a))
		return (0);
	stop_flag = size_a
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
