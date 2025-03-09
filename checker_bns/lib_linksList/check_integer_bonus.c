/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:03 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 22:01:12 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_integer(char *str)
{
	int	i;
	int	vld;

	i = 0;
	vld = 0;
	if (!str[0])
		return (0);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if ((str[i] == '-' || str[i] == '+') 
			&& (str[i + 1] >= '0' && str[i + 1] <= '9') 
			&& (i == 0 || str[i - 1] == ' '))
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			vld = 1;
		}
		else
			return (0);
	}
	return (vld);
}
