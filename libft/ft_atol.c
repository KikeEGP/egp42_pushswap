/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:15:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/17 20:08:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

long	ft_atol(const char *str, int *counter)
{
	long	result;
	long	sign;

	result = 0;
	sign = 1;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = 1 - 2 * (*str == '-');
		str++;
	}
	while (*str >= '0' && *(str + 1) != '\0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + (*str++ - '0');
		(*counter)++;
	}
	return (result * sign);
}
