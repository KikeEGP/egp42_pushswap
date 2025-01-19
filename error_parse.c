/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:20:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 17:09:33 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_argument()
{
	free();/*WHAT HAVE TO FREE HERE?!?*/
	ft_putendl("Error");
	exit(EXIT_FAILURE);
}

void	check_atoi_overflow(long result, int count)
{
	if(!count || (count > 10 && (result == INT_MAX || result == INT_MIN)))
		error_argument(/*wHAT?*/);
}

