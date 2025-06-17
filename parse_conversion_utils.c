/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conversion_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:42:00 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/17 20:55:40 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ADD HERE Function to compare new number to all previous*/

/*Below here, string_to_int's utils functions*/
int	check_atoi_overflow(long result, int count, char *str)
{
	if (!count || (count > 10 && (result == INT_MAX || result == INT_MIN))
		|| ft_atoi(str) != result)
		return (0);
	return (1);
}

/*If string != totally converted, returns a pointer*/
char	*get_endptr(char *str)
{
	char	*expected_null;
	int		i;

	expected_null = str;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		expected_null = &str[++i];
	return (expected_null);
}
