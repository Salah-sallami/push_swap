/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:33:16 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:10:27 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_stack(t_list **stack_a, int loop)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (loop <= size / 2)
		while (loop--)
			ft_ra(stack_a, 'Y');
	else
	{
		loop = size - loop;
		while (loop--)
			ft_rra(stack_a, 'Y');
	}
}

void	push_b(t_list **stack_a, t_list **stack_b, int value)
{
	t_list	*tmp;
	int		loop;

	tmp = *stack_a;
	loop = 0;
	while (*stack_a && ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->data < value)
		{
			*stack_a = tmp;
			rotate_stack(stack_a, loop);
			ft_pb(stack_a, stack_b);
			tmp = *stack_a;
			loop = 0;
		}
		else
		{
			loop++;
			*stack_a = (*stack_a)->link;
		}
	}
	*stack_a = tmp;
}
