/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/13 19:24:27 by enrgil-p         ###   ########.fr       */
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
int	sort_check(t_stack *stack_a, int *index, int *wrong_place)
{
	t_stack	*pointer_stack;
	int		check;

	if (!stack_a)
		return (0);
	pointer_stack = stack_a;
	*index = 0;/*PROBLEM: In sorted list, index is 1 below position.
	If not sorted, *index = 0 is correct. Study this*/
	*wrong_place = 0;
	check = 1;
	while (pointer_stack->next != NULL)
	{
		if (pointer_stack->value > pointer_stack->next->value)
		{
			ft_printf("We are in sort_check. Values compared now are ");//debug
			ft_printf("%d and ", pointer_stack->value);//debug
			ft_printf("%d\n", pointer_stack->next->value);//debug
			check = -1;
			wrong_place++;
		}
		*index += 1;
		pointer_stack = pointer_stack->next;
	}
	return (check);
}
/*OTHER IDEA: CHECK LIKE STRTRIM. You can use this function from top
 * and from bottom too. So you can see where is first error, 
 * maybe you choose one rotate or other...
 BUT REMEMBER IS EASIER TO POP AND PUSH FIRST VALUES*/
