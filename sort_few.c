/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:24 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/13 20:01:01 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	???	*/	sort_three()/*Try to apply to two, too.
					And you enter here if (!sort_check)*/
{
	while (!sorted(/*stack_a*/))
	{
		if (/*numbers == 2*/ || /*pos 2 == is in 2th of list*/)
			sa();
		else if (stack_a->position == 2)
			ra();
		else
			rra();
	}
}
/*Place to create functions for arguments <= 3, 4 or 5. 
 *
 * Remember, max 2 movs with 3 values. 12 moves max in cas of 5*/
