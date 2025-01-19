/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conv_comp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:42:00 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 20:12:48 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ADD HERE Function to compare new number to all previous*/

/*Below here, string_to_int's utils functions*/
void	check_atoi_overflow(long result, int count)
{
	if(!count || (count > 10 && (result == INT_MAX || result == INT_MIN)))
		error_argument(/*wHAT?*/);
}

/*If string != totally converted, returns a pointer*/
char	*get_endptr(const char *str)
{
	const char	*expected_null;
	int		i;

	expected_null = str;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		expected_null = &str[i];
		i++;
	}
	return ((char *)expected_null);
}
