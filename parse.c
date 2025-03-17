/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/17 21:38:50 by enrgil-p         ###   ########.fr       */
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
	ft_printf("******ENDTR IS  %p value\n", *endptr);//debug
	if (*endptr[0] == '\0')//HERE WAS THE PROBLEM. THIS IS THE SOLUTION
	{
		ft_printf("**STRING_TO_INT. input is %s\n", source_str);//debug
		atoi_counter = 0;
		result = ft_atoi_protected(source_str, &atoi_counter);
		if (!check_atoi_overflow(result, atoi_counter))
			*endptr = "Error";
	}
	ft_printf("THIS IS STRING_TO_INT. Result is %d\n", result);//debug
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
	ft_printf("convert and addi, flag is %pi<-----\n", flag);/*Debug*/
	while (split_arg[i])
	{
//		ft_printf("In loop\n");/*Debug*/
		if (!ft_strchr_digit(split_arg[i]))
			return (0);
//		ft_printf("Second step in loop\n");/*Debug*/
		value = string_to_int(split_arg[i], &flag);
		ft_printf("FLAG NOW has %s value\n", flag);//debug
		if (flag[0] != '\0' || !add_to_list(value, &parse_list))
			return (0);
		i++;
	}
	return (1);
}

static int	split_to_convert(int argc, char **argv, t_stack **parse_list)
{
	int	i;
	char	**split_arg;

	ft_printf("%d\n", *parse_list);
	i = 1;
	while (i < argc)
	{
		split_arg = ft_split(argv[i], 32);
		ft_printf("%s\n%s\n", split_arg[0], split_arg[2]);//Debug
		if (!split_arg || !convert_and_add(split_arg, parse_list))
		{
			if (split_arg)
				free_split(split_arg);
			return (0);
		}
		ft_printf("split end\n");/*Debug*/
		free_split(split_arg);
		i++;
	}
	return (1);
}

int	parse_main(int argc, char **argv, t_stack **stack_a)
{
	t_stack	*parse_list;

	if (!initialize_stack(&parse_list, 0)/* || !parse_chars(argc, argv)*/
		|| !split_to_convert(argc, argv, &parse_list))
	{
		ft_printf("CLEAN PARSE_LIST\n");//test
		clean_list(parse_list);
		return (0);
	}
	*stack_a = parse_list;//HEY, FREE PARSE_LIST
	/*Add to list every conversion, that's storage*/
	/*When do we compare new numbers? At moment of put in list?*/
	/*[1/2/25]PARSE_LIST for parse, then add to stack_a with LIFO*/
	ft_printf("Parse successufl\n");//DEBUGGING
	return (1);
}
