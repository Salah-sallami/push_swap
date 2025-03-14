/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:30:38 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/13 20:35:45 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_at_end(t_list **head, int data)
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *head;
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
	{
		return ;
	}
	tmp->data = data;
	tmp->link = NULL;
	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = tmp;
}
