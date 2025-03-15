/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_target_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:33:45 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:10:38 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	calculate_total_moves(t_list *tmp_b, int size_a, int size_b)
{
	if (tmp_b->index <= size_b / 2)
	{
		if (tmp_b->target <= size_a / 2)
			return (tmp_b->index + tmp_b->target + 1);
		return (tmp_b->index + size_a - tmp_b->target + 1);
	}
	if (tmp_b->target <= size_a / 2)
		return (size_b - tmp_b->index + tmp_b->target + 1);
	return (size_b - tmp_b->index + size_a - tmp_b->target + 1);
}

static void	calcul_moves(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_b = *stack_b;
	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	while (tmp_b)
	{
		tmp_b->total_moves = calculate_total_moves(tmp_b, size_a, size_b);
		tmp_b = tmp_b->link;
	}
}

static int	search_min_moves(t_list **stack_b)
{
	t_list	*tmp_b;
	int		min_moves;

	tmp_b = *stack_b;
	min_moves = tmp_b->total_moves;
	while (tmp_b)
	{
		if (!tmp_b)
			break ;
		if (tmp_b->total_moves < min_moves)
			min_moves = tmp_b->total_moves;
		tmp_b = tmp_b->link;
	}
	return (min_moves);
}

static void	empty_stack_b(t_list **stack_a, t_list **stack_b, int min_moves)
{
	t_list	*tmp_b;
	t_list	*tmp_a;

	tmp_b = *stack_b;
	tmp_a = *stack_a;
	while (tmp_b)
	{
		if (tmp_b->total_moves == min_moves)
		{
			push_min_moves(stack_a, stack_b, min_moves);
			ft_pa(stack_a, stack_b);
			add_index(stack_a, stack_b);
			if (!*stack_b)
				return ;
			push_target_b(stack_a, stack_b);
			break ;
		}
		tmp_b = tmp_b->link;
	}
}

void	push_target_b(t_list **stack_a, t_list **stack_b)
{
	int	min_moves;

	if (!stack_a || !stack_b || !*stack_b)
		return ;
	target_b_for_a(stack_a, stack_b);
	calcul_moves(stack_a, stack_b);
	min_moves = search_min_moves(stack_b);
	empty_stack_b(stack_a, stack_b, min_moves);
}
