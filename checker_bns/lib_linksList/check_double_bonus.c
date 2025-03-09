/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:57:29 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:57:36 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_double(t_check *head)
{
	t_check	*ptr;

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
