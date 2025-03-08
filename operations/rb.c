/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:16:09 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:27:22 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "operations.h"

void	ft_rb(t_list **stack_b, char vld)
{
	ft_rotate(stack_b);
	if (vld != 'N')
		ft_printf("rb\n");
}
