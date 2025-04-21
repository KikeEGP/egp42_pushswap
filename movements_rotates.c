/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/04/21 20:04:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack ***first, t_stack ***last, int id_stack)
{
	**first = (**first)->next;
	(**first)->prev = (**last)->next;
	**last = (**last->next);
	(**last)->next = NULL;
	(**first)->prev = NULL;
	if (id_stack == 'a')
		ft_putendl("ra");
	else if (id_stack == 'b')
		ft_putendl("rb");
}

void	rotate_both(/*HEY, HOW I CAN PUT HERE FOUR POINTERS*/)
{
	rotate(stack_a,/*¿node?*/);
	rotate(/*stack_b*/,/*¿node?*/);
	putendl("rr"); /*WHEN?!!?*/
}

/*Something*/	reverse_rotate(/*stack*/, /*¿node?*/)
{
	/*	1ºGo to last_node. Now, last_node->next points to head
		2ºprev of last_node->next should point now to NULL
		3ºformer last_node now is pointed by head
		4ºsOMEWHERE and somewhen, putendl("rra") or "rrb"*/
}

/*Something*/	reverse_rotate_both(/*stack_a*/,/*stack_b*/)
{
	reverse_rotate(/*stack_a*/,/*¿node?*/);
	reverse_rotate(/*stack_b*/,/*¿node?*/);
	putendl("rrr");
}
