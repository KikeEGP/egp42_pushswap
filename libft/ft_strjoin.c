/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:57 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 16:26:42 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;
	size_t	s1_len;

	if (s1 || s2)
	{
		if (s1 && !s2)
			return (ft_strdup(s1));
		if (!s1 && s2)
			return (ft_strdup(s2));
		s3_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
		s3 = ft_calloc (s3_len, sizeof(char));
		if (!s3)
			return (0);
		s1_len = ft_strlen(s1);
		s3 = ft_memcpy(s3, s1, s1_len);
		s3 = ft_memcpy(&s3[s1_len], s2, ft_strlen(s2));
		return (s3 - s1_len);
	}
	return (NULL);
}
