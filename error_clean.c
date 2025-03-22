/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/22 23:46:28 by enrgil-p         ###   ########.fr       */
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

void	clean_list(t_stack *head)
{
	static int	i;//debug
	t_stack	*keeper;

	i = 1;
	ft_printf("Inside of clean_list\n");
	while (head)
	{
		ft_printf("%d\n", head->value);//debug
		keeper = head;
		head = keeper->next;
//		if (keeper->next)
//			keeper->next = NULL;
		free(keeper);
		ft_printf("Clean %d times\n", i);//debug
		i++;
	}
	free(head);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("Clean stacks\n");
	if (stack_b)
		clean_list(stack_b);
	if (stack_a)
		clean_list(stack_a);
}

void	error_argument(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	ft_putendl_error("Error");
	exit(EXIT_FAILURE);
}
