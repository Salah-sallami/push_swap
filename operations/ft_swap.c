/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:15:05 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:25:37 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ft_swap(t_list **head_stack)
{
	t_list	*tmp;

	tmp = *head_stack;
	if ((*head_stack) == NULL)
		return ;
	if ((*head_stack)->link == NULL)
		return ;
	*head_stack = (*head_stack)->link;
	tmp->link = (*head_stack)->link;
	(*head_stack)->link = tmp;
}
