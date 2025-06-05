/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/05 20:39:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conditions_rotate_stack_a(t_sort_data *sd)
{
	ft_printf("Conditions rotate STACK_A\n");//debug
	if (sd->stack_a && is_2nd_lower(*sd->stack_a, *sd->last_a)
		&& is_2nd_lower(*sd->stack_a, (*sd->last_a)->prev))
		return (1);
	return (0);
}

/*In stack_a, rotate is for integers higher to be pushed yet*/
int	conditions_rotate_both(t_sort_data *sd)
{
	int	quarter;

	quarter = get_quarter(sd->size_a);
	ft_printf("Conditions rotate_both\n");//debug
	ft_printf("%p\n", sd->stack_b);//deb
	ft_printf("%p\n", *sd->stack_b);//deb
	ft_printf("%p and %d\n", *sd->stack_b, (*sd->stack_b)->value);//deb
	ft_printf("%p and %d\n", (*sd->stack_b)->next, (*sd->stack_b)->next->value);//deb
	if (sd->stack_b && (*sd->stack_b)->position > quarter
		&& conditions_rotate_stack_a(sd))
		return (1);
	return (0);
}

int	conditions_reverse_stack_a(t_sort_data *sd)
{
	if (is_2nd_lower(*sd->stack_a, *sd->last_a)
		|| is_2nd_lower(*sd->stack_a, (*sd->last_a)->prev))
		return (1);
	return (0);
}

int	conditions_reverse_stack_b(t_sort_data *sd)
{
	ft_printf("\n\tConditions reverse_stack_b\n");//debug
	ft_printf("sd->stack_B is %p\n", *sd->stack_b);//debug
	ft_printf("sd->last_B is %p\n", *sd->last_b);//debug
	if (is_2nd_lower(*sd->last_b, *sd->stack_b)
		|| is_2nd_lower((*sd->last_b)->prev, *sd->stack_b))
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
