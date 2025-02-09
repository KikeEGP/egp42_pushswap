/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_add_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:40:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/02/09 03:47:54 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swaop.c"

void	add_to_list(int value, /*storage*/)
{
	t_stack	new_node;
	new_node = ft_lstnew(value);/*THIS CREATES NEW NODE, NOT LIST*/
	/*IF NOT PROPERLY CREATED NODE???*/
	ft_lstadd_front(/*stack_list_parse*/, new_node);
}
