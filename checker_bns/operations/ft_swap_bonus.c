/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:07:51 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 00:56:30 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap(t_check **head_stack)
{
	t_check	*tmp;

	tmp = *head_stack;
	if ((*head_stack) == NULL)
		return ;
	if ((*head_stack)->link == NULL)
		return ;
	*head_stack = (*head_stack)->link;
	tmp->link = (*head_stack)->link;
	(*head_stack)->link = tmp;
}
