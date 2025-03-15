/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:07:44 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 00:56:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rotate(t_check **head_stack)
{
	t_check	*tmp;
	t_check	*head;

	tmp = *head_stack;
	head = *head_stack;
	if ((*head_stack) == NULL)
		return ;
	if ((*head_stack)->link == NULL)
		return ;
	*head_stack = head->link;
	while (head->link != NULL)
		head = head->link;
	head->link = tmp;
	tmp->link = NULL;
}
