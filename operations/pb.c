/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:15:47 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:27:18 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "operations.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_printf("pb\n");
}
