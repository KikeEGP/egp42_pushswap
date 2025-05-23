/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:52:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/23 23:50:34 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack **st_a, t_stack **st_b, t_stack **last_a, int size_a)
/*What about an initial dual index to see if two consecutive nodes...
 * One forward, from head, other one at same time but reverse*/
/*This could be interesting to avoid to much moves, but... Try first a one way
 * algorithm, forget strange cases*/
