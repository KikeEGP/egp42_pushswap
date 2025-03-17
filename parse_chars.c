/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:13:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/17 21:38:11 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Digits, whitespace and '+' or '-'. Based in ft_isalnum	*/
static int	found_forbidden(int c)
{
	return (ft_isdigit(c) || ft_isspace(c) || ft_issign(c));
}

static int	chars_allowed(char **argument)
{
	size_t	i;

	i = 0;
	ft_printf("Not seg\n");/***/
	while (*argument[i])
	{
		ft_printf("argument is %c\n", argument[i]);/***/
		if (!found_forbidden(*argument[i]))
			return (0);
		i++;
	}
	return (1);
}

int	parse_chars(int arg_counter, char **arg_vector)
{
	ft_printf("---ENTER IN PARSE_CHARS---\n");//debug

	while (arg_counter > 1)
	{
		ft_printf("Loop parse_chars\n");//debug
		if (!chars_allowed(&arg_vector[arg_counter - 1]))
			return (0);
		arg_counter--;
	}
	ft_printf("---OUT IN PARSE_CHARS---\n");//debug
	return (1);
}
