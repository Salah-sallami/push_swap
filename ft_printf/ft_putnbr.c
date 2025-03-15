/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:30:43 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:08:11 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	len_number(int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	handle(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
	}
	else if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		i = 10;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648 || nb == 2147483647)
		i = handle(nb);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			i++;
		}
		i = i + len_number(nb);
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
			ft_putchar(nb + 48);
	}
	return (i);
}
