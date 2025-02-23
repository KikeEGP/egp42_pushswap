/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/23 20:13:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct	s_stack
{
	int		value;
	struct s_stack	*prev;
	struct s_stack	*next;
	size_t		position;
}	t_stack;

typedef struct	s_storage
{
	t_stack	stack_a;
	t_stack	stack_b;
}	t_storage;

/*pdel-olm storages data in different structs, as matrioshkas
 * And have two pointers for both stacks: two tops and two bottoms
 * With top->next and bottom->prev, he can manage easily four values/positions+
 * KEEP THIS IN MIND AND UPDATE THIS FILE*/
