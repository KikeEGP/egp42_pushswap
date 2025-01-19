/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:24:53 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/19 18:09:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*New function allowed: exit(), defined in stdlib.h, included in libft*/
# include "libft/complete_libft.h"
/*		Defines and structs		*/
# include "definitions.h"

/*				parse				*/
void	parse_chars(int arg_counter, char **arg_vector);
void	check_forbidden_chars(char *argument);
int	chars_allowed(int c);
void	error_argument(/*check this one*/);
void	check_atoi_overflow(long result, int count);

#endif
