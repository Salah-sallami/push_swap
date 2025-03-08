/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:32:07 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:32:19 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_list **stack_a)
{
	t_list	*ptr;
	int		tmp;
	int		vld;

	ptr = *stack_a;
	tmp = ptr->data;
	vld = 0;
	while (ptr != NULL)
	{
		if (vld == 1)
		{
			if (ptr->data <= tmp)
				return (1);
			tmp = ptr->data;
		}
		vld = 1;
		ptr = ptr->link;
	}
	free(ptr);
	return (0);
}
