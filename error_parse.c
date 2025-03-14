/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/14 22:25:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_argument(t_stack *stack_a/*, t_stack *stack_b ????*/)
{
	/*TASK: study if you can free in any case or error_argument
	just free a null values stack_a.

	NO, FOR ANY CASE. PARSE MAY RETURN STACK_A EMPTY 
	BUT ALSO WITH MANY NODES*/
	free(stack_a);
	//free(parse_list); parse_list is free() at parse_main
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
