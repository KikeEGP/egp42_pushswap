/*	INCLUDE HEADER HERE	*/

#include "push_swap.h"

typedef struct	s_stack
{
	int		value;
	struct s_stack	*prev;
	struct s_stack	*next;
	int		position;
}	t_stack;

/*pdel-olm storages data in different structs, as matrioshkas
 * And have two pointers for both stacks: two tops and two bottoms
 * With top->next and bottom->prev, he can manage easily four values/positions+
 * KEEP THIS IN MIND AND UPDATE THIS FILE*/
