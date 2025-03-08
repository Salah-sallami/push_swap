/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:32:21 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:32:26 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_linksList.h"

int	ft_lstsize(t_list *lst)
{
	int count;
	t_list *temp;

	count = 0;
	temp = (t_list *)lst;
	while (temp)
	{
		count++;
		temp = temp->link;
	}
	return (count);
}