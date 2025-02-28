/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:30:57 by ssallami          #+#    #+#             */
/*   Updated: 2024/12/01 14:51:26 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	j;

	j = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[j] != '\0')
	{
		write(1, &s[j], 1);
		j++;
	}
	return (j);
}
