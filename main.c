/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/06/18 18:19:04 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_stack **stack_a, t_stack **last_a)
{
	int	sort_check_result;
	int	size_a;
	t_stack	*stack_b;

	stack_b = NULL;
	sort_check_result = check_sort_and_size(*stack_a, &size_a);
	while (sort_check_result <= 0)
	{
		if (size_a <= 3)
			sort_three(stack_a, last_a, NULL);
		else if (size_a <= 5)
			sort_five(stack_a, last_a);
		else
			big_sort(stack_a, &stack_b, last_a, size_a);
		sort_check_result = sort_check(*stack_a);
	}
}

int	main(int argc, char *a_vector[])
{
	t_stack	*stack_a;
	t_stack	*last_a;

	if (argc == 1)
		return (0);
	stack_a = NULL;
	last_a = NULL;
	if (!parse_main(argc, a_vector, &stack_a, &last_a))
		error_happened(&stack_a);
	sort(&stack_a, &last_a);
	clean_list(&stack_a);
	return (0);
}
