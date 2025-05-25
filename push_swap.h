/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:53 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/25 19:41:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*New function allowed: exit(), defined in stdlib.h, included in libft*/
# include "libft/complete_libft.h"
/*		Defines and structs		*/
# include "definitions.h"
/*	*	*	*	* main	*	*	*	*	*/
int		initialize_node(t_stack **new_stack, int value);
/*	*	*	*	* parse	*	*	*	*	*/
int		parse_main(int argc, char **argv, t_stack **stack_a,
			t_stack **last);
/*	* parse_conversion_utils *	*/
int		check_atoi_overflow(long result, int count);
char	*get_endptr(char *str);
/*	* parse_add_nodes *	*/
int		add_to_list(int value, t_stack **parse_list);
int		check_atoi_overflow(long result, int count);
/*	* parse_check_duplicate */
int		check_duplicate(t_stack **parse_list, t_stack **stack_a,
			t_stack **last);
//
/*	*	*	*	sort time	*	*	*	*/
int		sort_check(t_stack *stack_a);
int		check_sort_and_size(t_stack *stack_a, int *size);
void	sort_three(t_stack **stack_a, t_stack **last_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **last_a);
int		big_sort(t_stack **st_a, t_stack **st_b,
			t_stack **last_a, int size_a);
/*	*	sort_few_utils *	*/
int		next_lower(t_stack *node);
int		next_next_lower(t_stack *node);
/*	*	sort_large_utils 	*/
void	get_quartiles(int size_a, t_sort_data *sort_data);
void	update_last_ptr(t_stack **head, t_stack **last);
/*	* sort_large_comparison_utils *	*/
int		second_is_lower(t_stack *node_1, t_stack *node_2);
/*	*	*	*	movements	*	*	*	*/
void	pop_push(t_stack **stack_in, t_stack **stack_out);
void	push(t_stack **stack_a, t_stack **stack_b, int id_stack);
void	swap(t_stack **stack_swapped, int id_stack);
void	swap_both(t_stack **st_a, t_stack **st_b);
void	rotate(t_stack **first, t_stack **last, int id_stack);
void	reverse_rotate(t_stack **last, t_stack **first, int id_stack);
/*	*	*	*	error_clean	*	*	*	*/
void	clean_list(t_stack **head);
void	free_stacks(t_stack **stack_a, t_stack **stack_b);
void	error_happened(t_stack **stack_a, t_stack **stack_b);
void	free_split(char **array);
/*	*	*	* 	Taken from libft *	*	*	*/
int		stack_size(t_stack *lst);

#endif
