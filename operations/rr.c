/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:16:17 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:27:25 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "operations.h"

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a, 'N');
	ft_rb(stack_b, 'N');
	ft_printf("rr\n");
}
