/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:16:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 15:14:30 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	void	*ptr;

	if (!(size == 0 && count > SIZE_MAX / size))
	{
		ptr = (void *)malloc(count * size);
		if (!ptr)
			return (0);
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (0);
}
