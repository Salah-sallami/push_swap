/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:31:14 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:37:25 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../operations/operations.h"
#include "../push_swap.h"
#include "lib_linksList.h"

static void	take_min_data_to_head(t_list **stack_a)
{
	t_list	*tmp;
	int		min;
	int		index;

	tmp = *stack_a;
	min = tmp->data;
	index = tmp->index;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			index = tmp->index;
		}
		tmp = tmp->link;
	}
	if (index <= (ft_lstsize(*stack_a) / 2))
	{
		while (index--)
			ft_ra(stack_a, 'Y');
	}
	else
	{
		index = ft_lstsize(*stack_a) - index;
		while (index--)
			ft_rra(stack_a, 'Y');
	}
}

void	algorithm(t_list **stack_a, t_list **stack_b)
{
	int		sum;
	int		number;
	int		value;
	t_list	*tmp;

	sum = 0;
	number = 0;
	value = 0;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		sum += tmp->data;
		number++;
		tmp = tmp->link;
	}
	tmp = NULL;
	value = sum / number;
	push_b(stack_a, stack_b, value);
	Keep_3_in_stack_a(stack_a, stack_b);
	sort(stack_a);
	push_target_b(stack_a, stack_b);
	add_index(stack_a, stack_b);
	take_min_data_to_head(stack_a);
}
