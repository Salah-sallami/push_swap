/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:28:02 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 00:54:44 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_conversions(char c, va_list list)
{
	if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(list, unsigned int)));
	else if (c == 'X')
		return (ft_hex_uppercase(va_arg(list, int)));
	else if (c == 'x')
		return (ft_hex_lowercase(va_arg(list, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_hex_p(va_arg(list, unsigned long)) + 2);
	}
	return (0);
}
