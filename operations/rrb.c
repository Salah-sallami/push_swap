/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:16:33 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:12:49 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_list **stack_b, char vld)
{
	ft_reverse_rotate(stack_b);
	if (vld != 'N')
		ft_printf("rrb\n");
}
