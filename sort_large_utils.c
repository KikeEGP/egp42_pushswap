/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/09 17:30:37 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*We are working with integers. If siize is not multiple of 4,
 * quartile won't be accurate*/
int	get_quarter(int size_a)
{
	int	quarter;

	quarter = size_a / 4;
	if (size_a % 4 != 0)
		quarter += 1;
	return (quarter);
}

void	update_last_ptr(t_stack **head, t_stack **last)
{
//	ft_printf("\tLast before update is %p\n", *last);//debug
	if (!(*head))
//	if (!head)
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
}

/*You can't access directly to next or prev from struct. Remind this in future 
 * PS: IN FACT, YOU CAN. (*sd->stack_a)->element)*/
int	stop_empty_st_a(t_sort_data *sd)
{
	ft_printf("\tInside stop_empty_a conditions\n\n");//debug
	if (sd->size_a - sd->size_b <= 3
		|| sort_check_worths(*sd->stack_a, *sd->last_a))
		return (1);
	ft_printf("NON STOP_EMPTY, BABY\n");//debug
	return (0);
}

int	lower_than_quartile(t_sort_data *sd)
{
	if ((*sd->stack_a)->position >= sd->quartile
		&& (*sd->last_a)->position >= sd->quartile
		&& (*sd->last_a)->prev->position >= sd->quartile)
		return (1);
	return (0);
}
