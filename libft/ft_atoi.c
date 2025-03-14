/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:27:59 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 01:03:53 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "libft.h"

int	ft_atoi(char *str, int *vld)
{
	long	sum;
	int		sign;


	sum = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + (*str - '0');
		if ((sign == 1 && (sum > INT_MAX)) || (sign == -1 && (-sum < INT_MIN)))
		{
			*vld = 0;
			return (*vld);
		}
		str++;
	}
	return (sign * sum);
}
