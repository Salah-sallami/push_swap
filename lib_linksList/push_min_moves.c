/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_min_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:52:53 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:10:33 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	handle_rr_moves(t_list **stack_a, t_list **stack_b, int loop_a,
		int loop_b)
{
	int	loop_a_b;
	int	loop;

	if (loop_a > loop_b)
		loop_a_b = loop_b;
	else
		loop_a_b = loop_a;
	while (loop_a_b-- > 0)
		ft_rr(stack_a, stack_b);
	if (loop_a > loop_b)
	{
		loop = loop_a - loop_b;
		while (loop-- > 0)
			ft_ra(stack_a, 'Y');
	}
	else
	{
		loop = loop_b - loop_a;
		while (loop-- > 0)
			ft_rb(stack_b, 'Y');
	}
}

static void	handle_rrr_moves(t_list **stack_a, t_list **stack_b, int loop_a,
		int loop_b)
{
	int	loop_a_b;
	int	loop;

	if (loop_a > loop_b)
		loop_a_b = loop_b;
	else
		loop_a_b = loop_a;
	while (loop_a_b-- > 0)
		ft_rrr(stack_a, stack_b);
	if (loop_a > loop_b)
	{
		loop = loop_a - loop_b;
		while (loop-- > 0)
			ft_rra(stack_a, 'Y');
	}
	else
	{
		loop = loop_b - loop_a;
		while (loop-- > 0)
			ft_rrb(stack_b, 'Y');
	}
}

static void	rotate_stack_a(t_list **stack_a, int loop_a, int index)
{
	char	move;

	if (index <= ft_lstsize(*stack_a) / 2)
		move = 'r';
	else
		move = 'R';
	while (loop_a-- > 0)
	{
		if (move == 'r')
			ft_ra(stack_a, 'Y');
		else
			ft_rra(stack_a, 'Y');
	}
}

static void	rotate_stack_b(t_list **stack_b, int loop_b, int index)
{
	char	move;

	if (index <= ft_lstsize(*stack_b) / 2)
		move = 'r';
	else
		move = 'R';
	while (loop_b-- > 0)
	{
		if (move == 'r')
			ft_rb(stack_b, 'Y');
		else
			ft_rrb(stack_b, 'Y');
	}
}

void	push_min_moves(t_list **stack_a, t_list **stack_b, int min_moves)
{
	t_list	*tmp_b;
	int		loop_a;
	int		loop_b;

	tmp_b = find_target_node(stack_b, min_moves);
	if (!tmp_b)
		return ;
	loop_a = tmp_b->target;
	loop_b = tmp_b->index;
	if (loop_a > ft_lstsize(*stack_a) / 2)
		loop_a = ft_lstsize(*stack_a) - loop_a;
	if (loop_b > ft_lstsize(*stack_b) / 2)
		loop_b = ft_lstsize(*stack_b) - loop_b;
	if (tmp_b->target <= (ft_lstsize(*stack_a) / 2)
		&& tmp_b->index <= (ft_lstsize(*stack_b) / 2))
		handle_rr_moves(stack_a, stack_b, loop_a, loop_b);
	else if (tmp_b->target > (ft_lstsize(*stack_a) / 2)
		&& tmp_b->index > (ft_lstsize(*stack_b) / 2))
		handle_rrr_moves(stack_a, stack_b, loop_a, loop_b);
	else
	{
		rotate_stack_a(stack_a, loop_a, tmp_b->target);
		rotate_stack_b(stack_b, loop_b, tmp_b->index);
	}
}
