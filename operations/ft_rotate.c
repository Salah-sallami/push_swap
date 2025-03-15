/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:14:51 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:11:43 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **head_stack)
{
	t_list	*tmp;
	t_list	*head;

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
