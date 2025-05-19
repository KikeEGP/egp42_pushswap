/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/19 20:31:08 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

void	clean_list(t_stack **head)
{
	t_stack	*keeper;

	while (*head)
	{
		debug_list(*head);//debug, see what's happening
		keeper = *head;
		*head = (*head)->next;
		free(keeper);
	}
}

void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	ft_printf("\n\t DING DONG, TIME TO FREE STACKS");//debug
	debug_list(*stack_a);//debug
	if (stack_b)
		clean_list(stack_b);
	if (stack_a)
		clean_list(stack_a);
}

void	error_happened(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(&stack_a, &stack_b);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
