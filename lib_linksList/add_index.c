/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:30:53 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:31:04 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_index(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		i;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	i = 0;
	while (tmp_a != NULL)
	{
		tmp_a->index = i;
		i++;
		tmp_a = tmp_a->link;
	}
	i = 0;
	while (tmp_b != NULL)
	{
		tmp_b->index = i;
		i++;
		tmp_b = tmp_b->link;
	}
}
