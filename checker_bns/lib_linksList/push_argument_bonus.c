/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_argument_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:59:00 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/13 01:33:34 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"
#include "../libft/libft.h"
#include "lib_linksList.h"

static int	first_argument(char *argv, t_check *head)
{
	char	**p;
	int		j;

	if ((check_integer(argv) == 0))
		return (0);
	if ((check_nmb(argv)) != 0)
	{
		p = malloc(sizeof(int) * (check_nmb(argv)));
		p = ft_split(argv, ' ');
		head->data = ft_atoi(p[0]);
		head->link = NULL;
		j = 1;
		while (p[j])
			add_at_end(head, ft_atoi(p[j++]));
		free(p);
	}
	else
	{
		head->data = ft_atoi(argv);
		head->link = NULL;
	}
	return (1);
}

static int	after_first_argument(char *argv[], t_check *head)
{
	char	**p;
	int		i;
	int		j;

	i = 2;
	while (argv[i])
	{
		if ((check_integer(argv[i]) == 0))
			return (0);
		if ((check_nmb(argv[i])) != 0)
		{
			p = malloc(sizeof(int) * (check_nmb(argv[i])));
			p = ft_split(argv[i], ' ');
			j = 0;
			while (p[j])
				add_at_end(head, ft_atoi(p[j++]));
			free(p);
		}
		else
			add_at_end(head, ft_atoi(argv[i]));
		i++;
	}
	return (1);
}

int	push_argument(char *argv[], t_check *head)
{
	if (first_argument(argv[1], head) == 0)
		return (0);
	if (after_first_argument(argv, head) == 0)
		return (0);
	return (1);
}
