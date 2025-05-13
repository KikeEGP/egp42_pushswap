/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/13 19:07:18 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//With recursion, execution must pass two times unless case of 1st condition 
void	sort_three(t_stack **stack_a)
{
	t_stack	*last;

	ft_printf("Before sort_three, first is %d\n", (*stack_a)->value);//debug
	last = NULL;
	last = (*stack_a)->next->next;
	if (((*stack_a)->position == 1 
		&& (*stack_a)->next->position == 0))
	{
		swap(stack_a, 'a');//creta sa() to try this
		ft_printf("After swa, first is %d\n", (*stack_a)->value);//debug
	}
	else if ((*stack_a)->position == 2)
	{
		rotate(stack_a, &last, 'a');//create ra() to try this
		ft_printf("After rot, first is %d\n", (*stack_a)->value);//debug
	}
	ft_printf("After sort_three, first is %d\n", (*stack_a)->value);//debug
/*	else
		rra();//same as above
*/}
/*Place to create functions for arguments <= 3, 4 or 5. 
 *
 * Remember, max 2 movs with 3 values. 12 moves max in cas of 5*/
