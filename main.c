/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/23 20:18:15 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	????	*/	initialize_stack(t_stack /*struct*/)
{
	/*struct*/->value = 0;/*	CORRECT THIS		*/
	/*struct*/->prev = NULL;
	/*struct*/->next = NULL;
	/*struct*/->position = 0;
}

int	main(int a_counter, char *a_vector[])
{
	/*t_stack	stack_a;*//*Do I Need this?*/
	t_storage	*stacks;

	initialize(stacks);/*IS THIS CORRECT??*/
	if (a_counter == 1)
		return (0);
	stacks->stack_a = parse_main(a_counter, a_vector, stacks);
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	exit(EXIT_SUCCESS);
}
