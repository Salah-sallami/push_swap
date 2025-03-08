/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:35:50 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:38:08 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib_linksList/lib_linksList.h"
#include "../operations/operations.h"
#include "../push_swap.h"

t_list	*find_target_node(t_list **stack_b, int min_moves)
{
	t_list	*tmp_b;

	tmp_b = *stack_b;
	while (tmp_b && tmp_b->total_moves != min_moves)
		tmp_b = tmp_b->link;
	return (tmp_b);
}
