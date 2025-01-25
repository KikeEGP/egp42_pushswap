/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/25 19:58:58 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Based on strtol, just checks if a str can be totally converted*/
static int	string_to_int(const char *source_str,/* where_storage*/)
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
		return (error_argument(/*storage*/));
	return (result);
}

/*Convert, storage and compares numbers*/
static void convert_and_compare(char **split_arg, /*where_storage*/)
{
	int	i;

	i = 0;
	while (split_arg[i])
	{
		/*where_storage*/ = string_to_int(split_arg[i], /*storage*/);
		if(!/*compare_numbers*/)
			error_argument(/*storage*/);
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
			error_argument(/*storage*/);
		convert_and_compare(split_arg, /*where_storage*/);
		i++;
	}
	free(split_arg);
}

/*WHAT*/	parse_main(int argc, char **argv, /*where_storage*/)
{
	parse_chars(argc, argv);
	split_to_convert(argc, argv);
	/*Add to list every conversion, that's storage*/
	/*When do we compare new numbers? At moment of put in list?*/
}
