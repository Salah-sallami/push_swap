/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:31:52 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:31:57 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_integer(char *str)
{
	int i = 0;
	int vld = 0;
	if (!str[0])
		return (0);
	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			if (str[i] == '\0' && vld != 1)
				return (0);
			continue ;
		}

		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= '0' && str[i + 1] <= '9' && (i == 0 || str[i
					- 1] == ' '))
			{
				i++;
				continue ;
			}
			return (0);
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			vld = 1;
			continue ;
		}
		return (0);
	}

	return (1);
}