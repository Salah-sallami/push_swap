/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nmb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:32:01 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/13 22:45:02 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "lib_linksList.h"

int	check_nmb(char *str)
{
	int	i;
	int	vld;
	int	cont_nmb;

	i = 0;
	vld = 1;
	cont_nmb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' && vld == 1)
		{
			cont_nmb++;
			vld = 0;
		}
		if (str[i] == ' ')
			vld = 1;
		i++;
	}
	if (!check_integer(str))
		return (0);
	return (cont_nmb);
}
