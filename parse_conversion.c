/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:42:00 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/15 23:17:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ADD HERE Function to compare new number to all previous*/

/*Below here, string_to_int's utils functions*/
int	check_atoi_overflow(long result, int count)
{
	if (!count || (count > 10 && (result == INT_MAX || result == INT_MIN)))
		return (0);
	return (1);
}

/*If string != totally converted, returns a pointer*/
char	*get_endptr(char *str)
{
	char	*expected_null;
	int	i;

	expected_null = str;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		expected_null = &str[i + 1];
		i++;
	}
	ft_printf("Endptr is %s\n", expected_null);//debug
	return (expected_null);
}
