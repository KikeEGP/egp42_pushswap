/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:38:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 19:27:14 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	srch_forward(char const *ptr, char const *set, size_t n)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && ptr[n] != '\0')
	{
		if (set[i] == ptr[n])
		{
			n++;
			i = 0;
		}
		else
			i++;
	}
	return (n);
}

static size_t	srch_reverse(char const *ptr, char const *set, size_t n)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && n > 0)
	{
		if (set[i] == ptr[n])
		{
			n--;
			i = 0;
		}
		else
			i++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	forw_i;
	size_t	rev_i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	forw_i = 0;
	rev_i = ft_strlen(s1) - 1;
	forw_i = srch_forward(s1, set, forw_i);
	if (forw_i <= rev_i)
		rev_i = srch_reverse(s1, set, rev_i);
	result = ft_calloc((rev_i - forw_i) + 2, sizeof(char));
	if (!result)
		return (0);
	result = ft_memcpy(result, &s1[forw_i], (rev_i - forw_i) + 1);
	return (result);
}
