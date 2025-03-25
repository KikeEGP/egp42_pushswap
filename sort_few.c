/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/25 18:48:54 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a, int stack_size)
{
	while (sort_check(stack_a, NULL, NULL) == -1)
	{
		if (stack_size == 2/*||pos 2 == is in 2th of list*/)
			ft_printf("\n\nHEY, THIS SHOULD BE SWAPED\n\n");
			//sa();
		else if (stack_a->position == 2)
			ra();
		else
			rra();
	}
}
/*Place to create functions for arguments <= 3, 4 or 5. 
 *
 * Remember, max 2 movs with 3 values. 12 moves max in cas of 5*/
