/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:28:25 by ssallami          #+#    #+#             */
/*   Updated: 2024/12/01 14:28:29 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_p(unsigned long x)
{
	int		length;
	char	*hex;

	length = 0;
	hex = "0123456789abcdef";
	if (x >= 16)
		length = ft_hex_p(x / 16);
	ft_putchar(hex[x % 16]);
	return (length + 1);
}
