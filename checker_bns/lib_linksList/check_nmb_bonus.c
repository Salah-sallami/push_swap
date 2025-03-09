/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nmb_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:16 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 22:01:34 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (cont_nmb);
}
