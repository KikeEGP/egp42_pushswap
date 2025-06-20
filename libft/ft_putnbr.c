/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:08:25 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/17 19:18:53 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "write.h"

void	ft_putnbr(int decimal)
{
	if (decimal)
		ft_putnbr_fd(decimal, 1);
}
