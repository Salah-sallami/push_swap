/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:32 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 00:55:37 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_lstsize(t_check *lst)
{
	int		count;
	t_check	*temp;

	count = 0;
	temp = (t_check *)lst;
	while (temp)
	{
		count++;
		temp = temp->link;
	}
	return (count);
}
