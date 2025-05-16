/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/16 22:52:30 by enrgil-p         ###   ########.fr       */
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
		ft_printf("NODE CLEANING START\t");//debug
		debug_list(*head);//debug, see what's happening
		ft_printf("Going to clean %d\n", (*head)->value);//debufg
		keeper = *head;
		*head = (*head)->next;
		ft_printf("Is %p nil?\n\n", *head);//debug, see if head is nil
		ft_printf("Going to free %p\t", keeper);//debug
		free(keeper);
		//keeper = NULL;
		ft_printf("After free, it is %p\n", keeper);//debug
/*		TRY THIS ONE
 *		if (head->next != NULL)
			keeper = head->next;
		free(head);
*/	}
}

void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
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
