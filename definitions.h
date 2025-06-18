/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:03:08 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	int				value;
	int				position;
}	t_stack;

typedef struct s_sort_data
{
	t_stack		**stack_a;
	t_stack		**stack_b;
	t_stack		**last_a;
	t_stack		**last_b;
	int			size_a;
	int			size_b;
	int			quantile;
}	t_sort_data;
