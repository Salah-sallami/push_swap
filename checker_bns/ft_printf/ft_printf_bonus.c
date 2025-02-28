/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:28:57 by ssallami          #+#    #+#             */
/*   Updated: 2024/12/02 12:09:17 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *foramt, ...)
{
	va_list	list;
	int		i;
	int		j;

	va_start(list, foramt);
	i = -1;
	j = 0;
	while (foramt[++i] != '\0')
	{
		if (foramt[i] == '%')
		{
			if (foramt[i + 1] == 's' || foramt[i + 1] == 'c' || 
				foramt[i + 1] == 'd' || foramt[i + 1] == 'i' || 
				foramt[i + 1] == 'X' || foramt[i + 1] == 'p' || 
				foramt[i + 1] == 'u' || foramt[i + 1] == 'x' || 
				foramt[i + 1] == '%')
				j = j + ft_conversions(foramt[i++ + 1], list) - 2;
			else
				j--;
		}
		else
			write(1, &foramt[i], 1);
	}
	va_end(list);
	return (i + j);
}
