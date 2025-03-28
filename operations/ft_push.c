/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:14:05 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/20 21:04:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **from, t_list **to)
{
	t_list	*tmp;

	tmp = *from;
	if (*from == NULL)
		return ;
	*from = (*from)->link;
	if (to == NULL)
		tmp->link = NULL;
	else
		tmp->link = *to;
	*to = tmp;
}
