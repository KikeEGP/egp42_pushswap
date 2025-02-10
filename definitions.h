/*	INCLUDE HEADER HERE	*/

#include "push_swap.h"

typedef struct	s_stack
{
	int		integer;
	struct s_stack	*prev;
	struct s_stack	*next;
	int		position;
}	t_stack;
