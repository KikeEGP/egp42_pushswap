/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/25 17:09:37 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_quartiles(int size_a, t_sort_data *sort_data)
{
	sort_data->q1 = size_a / 4;
	sort_data->q1 = size_a / 4;
	sort_data->median = size_a / 2;
	sort_data->q1 = sort_data->q1 + sort_data->median;
	sort_data->size_a = size_a;
}
