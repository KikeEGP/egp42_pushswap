/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/08 20:06:48 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that checks if every node is in expected position*/
/*It could iterate and compare iteration index with t_stack->position*/
/*And storage number of times a number is not in expected place*/
/*Maybe, in case of few unexpected positions, 
 * could work with different instructions. But pdel-olm suggest to focus
 * in algorithm. In case of being well programmed, it should do this too*/
/*May check if stack_b exists and have nodes?*/
int	sort_check(t_stack *stack_a)
{
	int		check;

	if (!stack_a)
		return (0);
	check = 1;
	while (stack_a->next != NULL && check > 0)
	{
		ft_printf("\tWe are in sort_check. Values compared now are ");//debug
		ft_printf("%d and ", stack_a->value);//debug
		ft_printf("%d\n", stack_a->next->value);//debug
		if (next_lower(stack_a))
		{
			ft_printf("So, will have to sort now\n");//debug
			check = -1;
		}
		stack_a = stack_a->next;
		ft_printf("\tSort_check is %d\n", check);//debug
	}
	ft_printf("\t\tOUT OF SORT_CHECK\n");
	return (check);
}

int	sort_check_worths(t_stack *head_asked, t_stack *last_asked)
{
	ft_printf("Head is %d\n", head_asked->position);//debug
	ft_printf("Next is %d\n", head_asked->next->position);//debug
	ft_printf("Last is %d\n", last_asked->position);//debug
	ft_printf("Prev is %d\n", last_asked->prev->position);//debug
	if (is_2nd_lower(head_asked->next, head_asked)
		&& is_2nd_lower(last_asked, last_asked->prev)
		&& sort_check(head_asked) == 1)
		return (1);
	return (0);
}

int	check_sort_and_size(t_stack *stack_a, int *size)
{
	int	sort_check_result;

	sort_check_result = sort_check(stack_a);
	if (sort_check_result)
		*size = stack_size(stack_a);
	return (sort_check_result);
}
