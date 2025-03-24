/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/24 18:09:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that checks if every node is in expected position*/
/*It could iterate and compare iteration index with t_stack->position*/
/*And storage number of times a number is not in expected place*/
/*Maybe, in case of few unexpected positions, 
 * could work with different instructions. But pdel-olm suggest to focus
 * in algorithm. In case of being well programmed, it should do this too*/
int	sort_check(t_stack **stack_a)
{
	/*PARAMETER SHOULD BE A STRUCT WITH BOTH STACKS,
	 * so you can check if stack_b->value != NULL*/
	int	wrong_place;
	/*This var wrong_place should be in struct I mentioned above,
	 * and could be used to know how many erros are there*/
	size_t	index;
	int	check;
	t_stack	*pointer_stack;

	if (!stack_a)
		return (0);/*MAYBE NOT NECESSARY. OR MAYBE PUT HERE ERROR*/
	pointer_stack = stack_a;
	index = 0;
	wrong_place = 0;
	check = 1;
	while (pointer_stack != NULL)
	{
		if (check && index != stack_a->position)
			check = 0;
		else if (index != stack_a->position)

		index++;
		pointer_stack = pointer_stack->next;
	}
	return (check);
}
/*OTHER IDEA: CHECK LIKE STRTRIM. You can use this function from top
 * and from bottom too. So you can see where is first error, maybe you choose one rotate or other...
 * BUT REMEMBER IS EASIER TO POP AND PUSH FIRST VALUES*/
