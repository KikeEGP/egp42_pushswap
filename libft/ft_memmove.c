/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:58:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 16:18:05 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (len != 0)
	{
		s = (char *)src;
		d = (char *)dst;
		if (d > s)
		{
			while (len--)
				d[len] = s[len];
		}
		else
			ft_memcpy(d, s, len);
	}
	return (dst);
}
