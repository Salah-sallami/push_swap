/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:24 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:58:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_sort(t_check **stack_a)
{
	t_check	*ptr;
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
