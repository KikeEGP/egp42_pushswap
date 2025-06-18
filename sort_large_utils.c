/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:37:52 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*We are working with integers. If size is not multiple of 4,
 * quantile won't be accurate*/
int	get_quarter(int size_a)
{
	int	quarter;

	quarter = size_a / 8;
	if (size_a % 8 != 0)
		quarter += 1;
	return (quarter);
}

//If stack_in starts as an empty list and last != NULL, 1st node == last
void	update_last_ptr(t_stack **head, t_stack **last)
{
	if (!(*head))
		*last = NULL;
	else if (!(*head)->next)
		*last = *head;
}

int	stop_empty_st_a(t_sort_data *sd)
{
	if (sd->size_a - sd->size_b <= 3
		|| sort_check_worths(*sd->stack_a, *sd->last_a))
		return (1);
	return (0);
}
