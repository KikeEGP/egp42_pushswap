/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/17 20:56:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	????	*/	initialize_stack(t_stack /*struct*/)
{
	/*struct*/->value = 0;
	/*struct*/->prev = NULL;
	/*struct*/->next = NULL;
	/*struct*/->position = 0;
}

int	main(int a_counter, char *a_vector[])
{
	t_stack	/*struct*/;

	initialize(/*struct*/)
	if (a_counter == 1)
		return (0);
	/*struct????*/ = parse_main(a_counter, a_vector/*, MAYBE SOMETHING*/);
	/*You have here the stack_a ready. Let's sort it*/
	
	/*EXPECTED RESULT IS A LIST OF COMMANDS PRINT*/
	/*While you are sorting, at the end of a move,
	 * you may ft_printf("%s\n", command) 
	 * or putendl_fd("command", 1);*/
	exit(EXIT_SUCCESS);
}
