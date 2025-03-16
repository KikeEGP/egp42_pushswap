/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:15:15 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 16:30:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (str != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f((unsigned int)i, s[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
