/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:18:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/22 23:45:46 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *lst)
{
	int	result;

	result = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		result++;
	}
	return (result);
}
