/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:13:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 17:29:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Digits, whitespace and '+' or '-'. Based in ft_isalnum	*/
static int	chars_allowed(int c)
{
	return (ft_isdigit(c) || ft_isspace(c) || ft_issign(c));
}

void	check_forbidden_chars(char *argument)
{
	size_t	i;

	i = 0;
	while (argument[i])
	{
		if (!chars_allowed(argument[i]))
			error_argument();
		i++;
	}
}
