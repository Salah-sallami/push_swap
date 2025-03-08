/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:33:57 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 18:54:25 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../operations/operations.h"
#include "../push_swap.h"
#include "lib_linksList.h"

void	sort(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	if (ft_lstsize(*stack_a) == 2)
	{
		a = (*stack_a)->data;
		b = (*stack_a)->link->data;
		if (a > b)
		{
			ft_sa(stack_a);
			return ;
		}
		return ;
	}
	a = (*stack_a)->data;
	b = (*stack_a)->link->data;
	c = (*stack_a)->link->link->data;
	if (a < c && a < b && c < b)
	{
		ft_ra(stack_a, 'Y');
		ft_sa(stack_a);
		ft_rra(stack_a, 'Y');
	}
	else if (b < a && b < c && a < c)
		ft_sa(stack_a);
	else if (b < c && b < a && c < a)
		ft_ra(stack_a, 'Y');
	else if (c < b && c < a && b < a)
	{
		ft_ra(stack_a, 'Y');
		ft_sa(stack_a);
	}
	else if (c < a && c < b && a < b)
		ft_rra(stack_a, 'Y');
}
