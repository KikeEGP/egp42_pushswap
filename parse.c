/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/14 22:26:57 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Based on strtol, just checks if a str can be totally converted*/
static int	string_to_int(char *source_str, char **endptr)
{
	long	result;
	int	atoi_counter;

	result = 0;
	*endptr = get_endptr(source_str);
	if (!endptr)
	{
		atoi_counter = 0;
		result = ft_atoi_protected(source_str, &atoi_counter);
		if (!check_atoi_overflow(result, atoi_counter))
			*endptr = "Error";
	}
	return (result);
}

/*Convert, storage and compares numbers*/
static int	convert_and_add(char **split_arg, t_stack **parse_list)
{
	int	i;
	char	*flag;
	int	value;

	i = 0;
	flag = NULL;
	while (split_arg[i])
	{
		if (!ft_strchr_digit(split_arg[i]))
			return (0);
		value = string_to_int(split_arg[i], &flag);
		if (flag != NULL && !add_to_list(value, parse_list))
			return (0);
		i++;
	}
	return (1);
}

static int	split_to_convert(int argc, char **argv, t_stack **parse_list)
{
	int	i;
	char	**split_arg;

	i = 1;
	while (i < argc)
	{
		split_arg = ft_split(argv[i], 32);
		if (!split_arg && !convert_and_add(split_arg, parse_list))
			return (0);
		free(split_arg);
		i++;
	}
	return (1);
}

int	parse_main(int argc, char **argv, t_stack **stack_a)
{
	t_stack	*parse_list;/*must be initialized*/

	if (!initialize_stack(&parse_list, 0) || !parse_chars(argc, argv)
		|| !split_to_convert(argc, argv, &parse_list))
		{
			//REMEMBER: use this type of comment for one line comm	
			//TASK: free parse_list NODE BY NODE
			return (0);
		}
	/*Add to list every conversion, that's storage*/
	/*When do we compare new numbers? At moment of put in list?*/
	/*[1/2/25]PARSE_LIST for parse, then add to stack_a with LIFO*/
	return (1);
}
