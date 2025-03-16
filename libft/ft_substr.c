/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:23:03 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 19:27:37 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	if (s)
	{
		s_len = ft_strlen(s);
		i = 0;
		while (i < start)
			i++;
		if (start > s_len)
			len = 0;
		else if ((len + start) >= s_len)
			len = s_len - start;
		sub = ft_calloc(len + 1, sizeof(char));
		if (!sub)
			return (0);
		sub = ft_memcpy(sub, &s[i], len);
		return (sub);
	}
	return (0);
}
