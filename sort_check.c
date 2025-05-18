/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/18 21:43:52 by enrgil-p         ###   ########.fr       */
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
	while (stack_a->next != NULL)
	{
		ft_printf("We are in sort_check. Values compared now are ");//debug
		ft_printf("%d and ", stack_a->value);//debug
		ft_printf("%d\n", stack_a->next->value);//debug
		if (stack_a->value > stack_a->next->value)
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

int	check_sort_and_size(t_stack *stack_a, int *size)
{
	int	sort_check_result;

	sort_check_result = sort_check(stack_a);
	if (sort_check_result != 1)
		*size = stack_size(stack_a);
	return (sort_check_result);
}
/*OTHER IDEA: CHECK LIKE STRTRIM. You can use this function from top
 * and from bottom too. So you can see where is first error, 
 * maybe you choose one rotate or other...
 BUT REMEMBER IS EASIER TO POP AND PUSH FIRST VALUES*/
