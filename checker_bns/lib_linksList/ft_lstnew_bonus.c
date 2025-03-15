/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:42:45 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 02:53:26 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_check	*ft_lstnew(int content)
{
	t_check	*node;

	node = (t_check *)malloc(sizeof(t_check));
	if (!node)
		return (NULL);
	node->data = content;
	node->link = NULL;
	return (node);
}
