/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:13:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/25 20:21:34 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Digits, whitespace and '+' or '-'. Based in ft_isalnum	*/
static int	chars_allowed(int c)
{
	return (ft_isdigit(c) || ft_isspace(c) || ft_issign(c));
}

static void	check_forbidden_chars(char *argument)
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

void	parse_chars(int arg_counter, char **arg_vector)
{
	while (arg_counter > 1)
		check_forbidden_chars(arg_vector[arg_counter--]);
}
