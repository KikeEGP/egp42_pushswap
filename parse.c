/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 19:53:12 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/*Convert, storage and compares numbers*/
static void convert_and_compare(char **split_arg, /*where_storage*/)
{
	int	i;

	i = 0;
	while (split_arg[i])
	{
		/*where_storage*/ = string_to_int(split_arg[i]);
		if(!/*compare_numbers*/)
			error_argument(/*What*/);
		i++;
	}
}

static void	split_to_convert(int argc, char **argv, /*where_storage*/)
{
	int	i;
	char	**split_arg;

	i = 1;
	while (i < argc)
	{
		split_arg = ft_split(argv[i]);
		if (!split)
			error_argument(/*What?*/);
		convert_and_compare(split_arg, /*where_storage*/);
		/*compare numbers*/
		i++;
	}
}

/*WHAT*/	parse_convert(int arg_counter, char **arg_vector)
{
	char	*split_args;

	parse_chars(arg_counter, arg_vector);
	split_to_convert(arg_counter, arg_vector);
	/*Add to list every conversion, that's storage*/
	/*When do we compare new numbers? At moment of put in list?*/
}
