/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/15 18:04:12 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clean_list(t_stack *head)
{
	t_stack	*keeper;

	while (head)
	{
		keeper = head;
		head = keeper->next;
		keeper->next = NULL;
		free(keeper);
	}
}

void	error_argument(t_stack *stack_a, t_stack *stack_b)
{
	/*TASK: study if you can free in any case or error_argument
	just free a null values stack_a.

	NO, FOR ANY CASE. PARSE MAY RETURN STACK_A EMPTY 
	BUT ALSO WITH MANY NODES*/
	if (stack_b)
		clean_list(stack_b);
	clean_list(stack_a);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
