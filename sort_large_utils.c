/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/02 20:21:59 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_last_ptr(t_stack **head, t_stack **last)
{
	if (!(*head))
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
	ft_printf("\tLast now is %p and has value %d\n", *last, (*last)->value);//debug
}

/*You can't access directly to next or prev from struct. Remind this in future 
 * PS: IN FACT, YOU CAN. (*sd->stack_a)->element)*/
int	stop_empty_stack_a(t_sort_data *sd)
{
	ft_printf("\tstop_empty_a conditions\n\n");//debug
	ft_printf("Value of stack_next is %d\n\n", (*sd->stack_a)->next->value);//debug
	if (sd->size_a - sd->size_b <= 3
		|| (is_2nd_lower((*sd->stack_a)->next, *sd->stack_a)
			&& is_2nd_lower(*sd->last_a, (*sd->last_a)->prev)
			&& sort_check(*sd->stack_a) == 1))
		return (1);
	ft_printf("NON STOP, BABY\n");//debug
	return (0);
}

//Same said in last comment
int	set_target_move_empty_a(t_sort_data *sd)
{
	ft_printf("SET_TAGET\n");//debug
	if (!stop_empty_stack_a(sd))
	{
		ft_printf("CHECK NEXT TARGET MOVE\n");//debug
		if (sd->quartile > (*sd->stack_a)->position
			&& is_2nd_lower(*sd->last_a, *sd->stack_a)
			&& is_2nd_lower((*sd->last_a)->prev, *sd->stack_a))
			return (1);
		else if ((*sd->stack_a)->position > sd->quartile
			&& (*sd->last_a)->position > sd->quartile
			&& (*sd->last_a)->prev->position > sd->quartile)
			return (0);
		else
			return (2);
	}
	return (-1);
}
