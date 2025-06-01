/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/01 19:31:28 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_stack_a(t_sort_data *sd)
{
	t_stack	*last_a;

	last_a = *sd->last_a;
	if (is_2nd_lower(*sd->stack_a, last_a)
		&& is_2nd_lower(*sd->stack_a, last_a->prev))
		return (1);
	return (0);
}

int	conditions_rotate_both(t_sort_data *sd)
{
	t_stack	*head_b;

	head_b = *sd->stack_b;
	if (head_b->position > sd->size_a / 4 && conditions_rotate_stack_a(sd))
		return (1);
	return (0);
}

int	conditions_reverse_stack_a(t_sort_data *sd)
{
	t_stack	*stack_a;
	t_stack	*last_a;

	stack_a = *sd->stack_a;
	last_a = *sd->last_a;
	ft_printf("We are in conditions, ");//debug
	ft_printf("last_A is %d\n", last_a->value);//debug
	ft_printf("last_A->prev is %d\n", last_a->prev->value);//debug
	ft_printf("stack_A is %d\n", stack_a->value);//debug
	if (is_2nd_lower(stack_a, last_a)
		|| is_2nd_lower(stack_a, last_a->prev))
		return (1);
	return (0);
}

int	conditions_reverse_stack_b(t_sort_data *sd)
{
	t_stack	*stack_b;
	t_stack	*last_b;

	ft_printf("\n\tConditions reverse_stack_b\n");//debug
	ft_printf("sd->stack_B is %p\n", *sd->stack_b);//debug
	ft_printf("sd->last_B is %p\n", *sd->last_b);//debug
	stack_b = *sd->stack_b;
	last_b = *sd->last_b;
	ft_printf("We are in conditions, ");//debug
	ft_printf("last_B is %p\n", *last_b);//debug
	if (is_2nd_lower(last_b, stack_b)
		|| is_2nd_lower(last_b->prev, stack_b))
		return (1);
	return (0);
}

int	conditions_reverse_both(t_sort_data *sd)
{
	if (conditions_reverse_stack_a(sd)
		&& (*sd->stack_b && conditions_reverse_stack_b(sd)))
		return (1);
	return (0);
}
