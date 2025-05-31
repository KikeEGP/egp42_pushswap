/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/31 21:01:50 by enrgil-p         ###   ########.fr       */
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
	int			size_a;/*Do you need this????*/
	int			size_b;
	int			quartile;
}	t_sort_data;

/*cLEAN THIS*/void debug_list(t_stack *node);//CLEAN THIS

/*pdel-olm storages data in different structs, as matrioshkas
 * And have two pointers for both stacks: two tops and two bottoms
 * With top->next and bottom->prev, he can manage easily four values/positions+
 * KEEP THIS IN MIND AND UPDATE THIS FILE*/
