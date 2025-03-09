/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:07:30 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 22:07:34 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ft_push(t_check **from, t_check **to)
{
	t_check	*tmp;

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
