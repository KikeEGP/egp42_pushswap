/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:37 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/17 19:24:42 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	overflow_happened(char *str, char *endptr)
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
}

static char	*get_endptr(const char *str)
{
	const char	*expected_null;
	int		i;

	expected_null = str;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i++]))
		expected_null = &str[i];
	return ((char *)expected_null);
}

static int	string_to_int(const char *source_str, char **endptr)
{
	char	*aux;
	size_t	aux_len;
	long	result;

	aux_len = 0;
	if (!ft_strchr_digit(source_str))/*This protects in case of
						source_str == ""*/
	{
		*endptr = (char *)source_str;
		return (0);/*MAYBE FUNCTION ERROR?*/
		/*This logic have sense in strtol. Maybe now I can remove*/
		/*Yeah, I think is better to error and exit*/
	}
	*endptr = get_endptr(source_str);
	if (!endptr)
		result = ft_atoi_protected(source_str);
	else
	{/*HEY, MAYBE DON'T NEED THIS PART, AND JUST STOP IF EXISTS ENDPTR*/
		aux_len = ft_strlen(source_str) - ft_strlen(*endptr);
		aux = ft_substr(source_str, 0, aux_len);
		if (!aux)
			return (/*FUNCTION_ERROR*/);
		result = ft_atoi_protected(aux);
		free(aux);
	}
	return (result);
}

static int	just_parse(const char argv_input)
{
	char	*aux;
	char	**endptr;
	int	result;

	*endptr = NULL;
	aux = argv_input;
	result = string_to_int(aux, &endptr);
	if (!overflow_happened(aux, *endptr))
	{

	}
	/*error_function: free() and exit()*/
}

int	parse_and_add(/*Use argv and (argc - 1) as parameters*/)
{
	int	i;

	i = 0;
	/*MAYBE THIS ONE MUST BE MAIN FUNCTION TO ALL, AND PARSE
	 * MUST BE DONE IN SECOND ONE. AND STRTOL, THIRD ONE*/
	while (i < /*argc - 1*/)
	/*INT IN STACK*/ = just_parse(argv);
	if (*endptr == )

	/*MAIN FUNCTION OF THE FILE. Function to call conversion and
	 * add to stack_a int by int*/
}
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
