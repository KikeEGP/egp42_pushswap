/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/01 17:34:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//After push if a stack could start or finish empty after this move 
void	update_last_ptr(t_stack **head, t_stack **last)
{
	if (!(*head))
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
}

//You can't access directly to next or prev from struct. Remind this in future 
int	stop_empty_stack_a(t_sort_data *sd)
{
	t_stack	*head;
	t_stack	*last;

	head = *sd->stack_a;
	last = *sd->last_a;
	ft_printf("\tstop_empty_a conditions\n\n");//debug
	if (sd->size_a - sd->size_b <= 3 || (is_2nd_lower(head->next, head)
			&& is_2nd_lower(last, last->prev)
			&& sort_check(head) == 1))
		return (1);
	ft_printf("NON STOP, BABY\n");//debug
	return (0);
}

//Same said in last comment
int	set_target_move_empty_a(t_sort_data *sd)
{
	t_stack	*head;
	t_stack	*last;

	ft_printf("SET_TAGET\n");//debug
	head = *sd->stack_a;
	last = *sd->last_a;
	if (!stop_empty_stack_a(sd))
	{
		ft_printf("CHECK NEXT TARGET MOVE\n");//debug
		if (sd->quartile > head->position && is_2nd_lower(last, head)
			&& is_2nd_lower(last->prev, head))
		{ft_printf("Target is 1\n");//debug
			return (1);
		}else if (head->position > sd->quartile
			&& last->position > sd->quartile
			&& last->prev->position > sd->quartile)
		{ft_printf("Target is 0\n");//debug
			return (0);
		}else
			return (2);
	}
	return (-1);
}
