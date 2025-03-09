/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:07:37 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 22:07:41 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ft_reverse_rotate(t_check **head_stack)
{
	t_check	*tmp;
	t_check	*head;

	tmp = *head_stack;
	head = *head_stack;
	if ((*head_stack) == NULL)
		return ;
	if ((*head_stack)->link == NULL)
		return ;
	while ((*head_stack)->link != NULL)
		(*head_stack) = (*head_stack)->link;
	(*head_stack)->link = tmp;
	while ((*head_stack) != head->link)
		head = head->link;
	head->link = NULL;
}
