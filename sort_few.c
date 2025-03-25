/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/25 20:09:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a, int size)
{
	ft_printf("\n\ninside sort three\n\n");
	ft_printf("inside stack_siez == %d\n");
	{
		if (size == 2/*||pos 2 == is in 2th of list*/)
			ft_printf("\n\nFirst node is %d\n", (*stack_a)->position);//debug
			//sa();
/*		else if (stack_a->position == 2)
			ra();
*/		else
			ft_printf("Size is not 2, is %d\n", size);//debug
/*			rra();
*/	}
}
/*Place to create functions for arguments <= 3, 4 or 5. 
 *
 * Remember, max 2 movs with 3 values. 12 moves max in cas of 5*/
