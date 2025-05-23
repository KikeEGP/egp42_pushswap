/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/23 23:58:39 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Must init stacks as NULL, just call this function only when you create a node
int	initialize_node(t_stack **new_node, int value)
{
	*new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	(*new_node)->value = value;
	(*new_node)->prev = NULL;
	(*new_node)->next = NULL;
	(*new_node)->position = 0;
	return (1);
}

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
