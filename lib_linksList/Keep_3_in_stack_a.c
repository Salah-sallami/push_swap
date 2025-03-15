/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Keep_3_in_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:32:40 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:10:07 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	keep_3_in_stack_a(t_list **stack_a, t_list **stack_b)
{
	int		number;
	t_list	*tmp;

	number = 0;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		number++;
		tmp = tmp->link;
	}
	tmp = NULL;
	while (number > 3)
	{
		ft_pb(stack_a, stack_b);
		number--;
	}
}
