/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:02:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 16:25:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complete_libft.h"

char	*ft_strchr_digit(const char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			return ((char *)s);
		s++;
	}
	return (0);
}
