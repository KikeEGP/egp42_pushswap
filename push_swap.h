/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:53 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/14 21:51:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*New function allowed: exit(), defined in stdlib.h, included in libft*/
# include "libft/complete_libft.h"
/*		Defines and structs		*/
# include "definitions.h"

/*	*	*	*	* main	*	*	*	*	*/
int		initialize_stack(t_stack **new_stack);
/*	*	*	*	* parse	*	*	*	*	*/
int		parse_main(int argc, char **argv, t_stack **stack_a);
int		parse_chars(int arg_counter, char **arg_vector);
/*	* parse_conv_add *	*/
int		check_atoi_overflow(long result, int count);
char		*get_endptr(char *str);
/*	* parse_add_nodes *	*/
int		add_to_list(int value, t_stack *parse_list);
t_stack		*create_node(void *content);
void		error_argument(/*check this one*/);
char		*get_endptr(char *str);
int		check_atoi_overflow(long result, int count);

#endif
