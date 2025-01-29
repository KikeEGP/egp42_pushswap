/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/29 21:02:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*QUESTION: prints immediatly? OR MAYBE STORES MOVES AND PUTENDL's
ALL AT THE END*/

/*Something*/	rotate(/*stack*/, /*¿node?*/)
{
	/*	1ºGo to stack's last_node. last_node->next points to head
		2ºhead now points to second node of list
		3ºFormer head->next now points to null 
			(HOW I FIND FORMER HEAD NOW, IF THERE'S NOT NEXT->NULL?)
		5ºputendl("ra") || putendl("rb"), BUT NOT NOW*/
}

/*Something*/	rotate_both(/*stack_a*/,/*stack_b*/)
{
	rotate(/*stack_a*/,/*¿node?*/);
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
