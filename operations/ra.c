/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:15:59 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:27:20 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "operations.h"

void	ft_ra(t_list **stack_a, char vld)
{
	ft_rotate(stack_a);
	if (vld != 'N')
		ft_printf("ra\n");
}
