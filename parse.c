/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 18:12:11 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static int	overflow_happened(char *str, char *endptr)
{
	size_t	str_size;
	size_t	end_size;

	str_size = ft_strlen(str);
	if (!endptr && str[str_size] == 48)
		return (1);
	else
	{
		end_size = str_size - ft_strlen(endptr);
		if (str[end_size - 1] == 48)
			return (1);
	}
	return (0);
}*/

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

/*Based on strtol, just checks if a str can be totally converted*/
static int	string_to_int(const char *source_str)
{
	long	result;
	int	atoi_counter;

	if (!ft_strchr_digit(source_str) && !get_endptr(source_str))
	{
		atoi_counter = 0;
		result = ft_atoi_protected(source_str, &atoi_counter);
		check_atoi_overflow(result, atoi_counter); 
	}
	else
		return (error_argument(/*#iWhat?*/));
	return (result);
}

/*WHAT*/	parse_convert(int arg_counter, char **arg_vector)
{
	parse_chars(arg_counter, arg_vector);
	/*Split args, one by one*/
	/*string to int, one by one*/
	/*HOW DO STORAGE OF CONVERSIONS*/
		//strdup is not an option

/*OKAY, 5/1/2025
 * we are gonna do as strtol, but with atoi_protected.
 * So, it's not strtol, but we will use here exactly the same
 * as done in ft_strtol*/


/*FUNCTION TO CHECK IF ARE NUMBERS*/
	/*If there can only be numbers, just check arg by arg*/
	/*If there can be a string with numbers, take care of it too*/
	/*Jump spaces. If find a + or -, check if it is correct*/
	/*Then, just isdigit*/

/*FUNCTION TO CREATE INT*/
	/*ft_atoi_protected(), which uses ft_atol() and check if it's integer*/
	/*If it's integer, return or put in stack_a*/
	/*If not, free mem allocated, "Error\n", exit(1)*/
		/*How to check? If it's INT_MAX or INT_MIN, extreme_value()
		 * and use strncmp to see if it's all OK*/

/*Put new integer in a new node of stac_a*/

/*FUNCTION TO COMPARE INTEGERS*/
	/*Compare number of stack with all of others. 
	 * 	Forward or reverse?*/
		/*Forward, maybe before put in stack_a, 
		 * check from first to last if there's the same int*/
