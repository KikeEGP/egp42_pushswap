/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push_swaps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:15:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/29 20:46:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*QUESTION: prints immediatly? OR MAYBE STORES MOVES AND PUTENDL's
ALL AT THE END*/

/*Something*/	push(/*stack*/, /*¿node?*/)
{
	/*	1ºAcces to head of original stack. Add a pointer
		2ºChange head to second node of list
		3ºDelete ex-head-> next, or directly point to the other
			stack's head
		4ºNow, ex-head of original stack is pointed by head
			of the target stack
		5ºFunction MUST KNOW which is stack target and 
			putendl("pa") || putendl("pb")*/
}

/*Something*/	swap(/*stack*/, /*¿node?*/)
{
	/*	1ºAcces to stack's head. head->next now points to third_node
		2ºSecond_node->next now points to head
		3ºhead now pooints to former second_node
		4º MUST BE OUT OF HERE: putendl("sa") || putendl("sb")
			must be out because if ss calls this function
			for both stacks, must only putendl("ss")*/
}

/*Something*/	swap_both(/*stack_a*/,/*stack_b*/)
{
	swap(/*stack_a*/,/*¿node?*/);
	swap(/*stack_b*/,/*¿node?*/);
	putendl("ss");
}
