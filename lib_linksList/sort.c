/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:33:57 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/22 01:50:37 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	apply_moves(t_list **stack_a, char move)
{
	if (move == 's')
		ft_sa(stack_a);
	else if (move == 'r')
		ft_ra(stack_a, 'Y');
	else if (move == 'R')
		ft_rra(stack_a, 'Y');
}

void	sort(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->link->data;
	if (ft_lstsize(*stack_a) == 2 && a > b)
		return (ft_sa(stack_a));
	c = (*stack_a)->link->link->data;
	if (a < c && a < b && c < b)
		return (apply_moves(stack_a, 'R'), apply_moves(stack_a, 's'));
	if (b < a && b < c && a < c)
		return (apply_moves(stack_a, 's'));
	if (b < c && b < a && c < a)
		return (apply_moves(stack_a, 'r'));
	if (c < b && c < a && b < a)
		return (apply_moves(stack_a, 'r'), apply_moves(stack_a, 's'));
	if (c < a && c < b && a < b)
		return (apply_moves(stack_a, 'R'));
}
