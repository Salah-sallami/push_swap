/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_b_for_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:46:36 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:46:09 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib_linksList/lib_linksList.h"
#include "../operations/operations.h"
#include "../push_swap.h"

static int	find_nearest_data_a(t_list **stack_a, int data_a, int data_b)
{
	t_list	*tmp_a;
	int		index;

	tmp_a = *stack_a;
	index = 0;
	while (tmp_a)
	{
		if (data_a >= tmp_a->data && tmp_a->data > data_b)
		{
			data_a = tmp_a->data;
			index = tmp_a->index;
		}
		tmp_a = tmp_a->link;
	}
	return (index);
}

static int	find_min_in_stack_a(t_list *stack_a)
{
	int	min;
	int	index;

	min = stack_a->data;
	index = stack_a->index;
	while (stack_a)
	{
		if (stack_a->data < min)
		{
			min = stack_a->data;
			index = stack_a->index;
		}
		stack_a = stack_a->link;
	}
	return (index);
}

static void	set_target_for_b(t_list **stack_a, t_list **stack_b, t_list *tmp_b)
{
	t_list	*tmp_a;

	tmp_a = *stack_a;
	while (tmp_a)
	{
		if (tmp_b->data < tmp_a->data)
		{
			add_index(stack_a, stack_b);
			tmp_b->target = find_nearest_data_a(stack_a, tmp_a->data,
					tmp_b->data);
			break ;
		}
		tmp_a = tmp_a->link;
	}
}

void	target_b_for_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;

	if (!stack_a || !stack_b || !*stack_b)
		return ;
	tmp_b = *stack_b;
	while (tmp_b)
	{
		tmp_b->target = find_min_in_stack_a(*stack_a);
		set_target_for_b(stack_a, stack_b, tmp_b);
		tmp_b = tmp_b->link;
	}
}
