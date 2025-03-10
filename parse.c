/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/10 19:52:34 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Based on strtol, just checks if a str can be totally converted*/
static int	string_to_int(const char *source_str, char **endptr)
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
			endptr = "Error";
	}
	return (result);
}

/*Convert, storage and compares numbers*/
static int	convert_and_add(char **split_arg, t_stack *parse_list)
{
	int	i;
	char	**flag;
	int	value;

	i = 0;
	flag = NULL;
	while (split_arg[i])
	{
		if (!ft_strchr_digit(split_arg[i]))
			return (0);
		value = string_to_int(split_arg[i], &flag);
		if (flag != NULL)
			return (0);
		i++;
		add_to_list(value, parse_list);/*Is parse_list initialze?*/
		/*THis should create a node, and now ADD NODE TO LIST*/
		/*Maybe check if add to node works properly*/
	}
	return (1);
}

static int	split_to_convert(int argc, char **argv, t_stack *parse_list)
{
	int	i;
	char	**split_arg;

	i = 1;
	while (i < argc)
	{
		split_arg = ft_split(argv[i], 32);
		if (!split_arg)/*CHECK THIS, I HAVE DOUBTS*/
			return (0);
		convert_and_add(split_arg, parse_list);
		free(split_arg);
		i++;
	}
	return (1);
}

int	parse_main(int argc, char **argv, t_stack *stack_a)
{
	t_stack	*parse_list;/*must be initialized*/

	parse_list = initialize(parse_list);
	if (!parse_list)
		return (NULL);
	if (!parse_chars(argc, argv))
		error_argument(/*storage*/);
	if (!split_to_convert(argc, argv, &parse_list))
		error_argument(/*storage*/);
	/*Add to list every conversion, that's storage*/
	/*When do we compare new numbers? At moment of put in list?*/
	/*[1/2/25]PARSE_LIST for parse, then add to stack_a with LIFO*/
	return (stack_a);
}
