/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:31:18 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:31:23 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(t_list *head)
{
	t_list	*ptr;

	ptr = head;
	while (head != NULL)
	{
		while (ptr != NULL)
		{
			if ((ptr->data == head->data) && (ptr->link != head->link))
			{
				return (0);
			}
			ptr = ptr->link;
		}
		head = head->link;
		ptr = head;
	}
	return (1);
}
