/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:13:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/18 22:45:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Digits, whitespace and '+' or '-'. Based in ft_isalnum	*/
int	chars_allowed(int c)
{
	return (ft_isdigit(c) || ft_isspace(c) || ft_issign(c));
}
