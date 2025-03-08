/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:16:25 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:27:27 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "operations.h"

void	ft_rra(t_list **stack_a, char vld)
{
	ft_reverse_rotate(stack_a);
	if (vld != 'N')
		ft_printf("rra\n");
}
