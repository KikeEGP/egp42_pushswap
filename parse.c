/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 21:34:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/24 20:42:53 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Based on strtol, just checks if a str can be totally converted*/
static int	string_to_int(char *source_str, char **endptr)
{
	long	result;
	int		atoi_counter;

	result = 0;
	*endptr = get_endptr(source_str);
	if (*endptr[0] == '\0')
	{
		atoi_counter = 0;
		result = ft_atoi_protected(source_str, &atoi_counter);
		if (!check_atoi_overflow(result, atoi_counter))
			*endptr = "Error";
	}
	return (result);
}

static int	convert_and_add(char **split_arg, t_stack **parse_list)
{
	char	*flag;
	int		value;
	int		i;

	i = 0;
	flag = NULL;
	while (split_arg[i])
	{
		if (!ft_strchr_digit(split_arg[i]))
			return (0);
		value = string_to_int(split_arg[i], &flag);
		if (flag[0] != '\0' || !add_to_list(value, parse_list))
			return (0);
		debug_list(*parse_list);//Try to change init of stacks
		i++;
	}
	return (1);
}

static int	split_to_convert(int argc, char **argv, t_stack **parse_list)
{
	int		i;
	char	**split_arg;

	i = 1;
	while (i < argc)
	{
		if (!ft_strchr_digit(argv[i]))
			return (0);
		split_arg = ft_split(argv[i], 32);
		if (!split_arg || !convert_and_add(split_arg, parse_list))
		{
			if (split_arg)
				free_split(split_arg);
			return (0);
		}
		free_split(split_arg);
		i++;
	}
	return (1);
}

/*Two parts: first is conversion. Second compares and set expected position*/
int	parse_main(int argc, char **argv, t_stack **stack_a, t_stack **last_a)
{
	t_stack	*parse_list;

	parse_list = NULL;
	if (!split_to_convert(argc, argv, &parse_list)
		|| !check_duplicate(&parse_list, stack_a, last_a))
	{
		clean_list(&parse_list);
		return (0);
	}
	return (1);
}
