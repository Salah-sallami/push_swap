/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at_end_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:57:19 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 02:51:32 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	add_at_end(t_check **head, int data)
{
	t_check	*ptr;
	t_check	*tmp;

	ptr = *head;
	tmp = (t_check *)malloc(sizeof(t_check));
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
