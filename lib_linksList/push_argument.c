/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:33:01 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 02:10:20 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static int	process_numbers(char **p, t_list **head, int index)
{
	int	j;
	int	num;
	int	vld;

	j = index;
	vld = 1;
	while (p[j])
	{
		num = ft_atoi(p[j], &vld);
		if (!vld)
		{
			free_split(p);
			return (0);
		}
		add_at_end(head, num);
		j++;
	}
	free_split(p);
	return (1);
}

static int	push_first_argument(char **p, t_list **head, char *argv)
{
	int	vld;
	int	num;

	vld = 1;
	if (p != NULL)
	{
		num = ft_atoi(p[0], &vld);
		if (!vld)
		{
			free_split(&p[0]);
			return (0);
		}
		*head = ft_lstnew(num);
	}
	else
	{
		num = ft_atoi(argv, &vld);
		if (!vld)
			return (0);
		*head = ft_lstnew(num);
		return (1);
	}
	return (process_numbers(p, head, 1));
}

static int	first_argument(char *argv, t_list **head)
{
	char	**p;

	if (!check_integer(argv))
		return (0);
	if (check_nmb(argv) > 1)
	{
		p = ft_split(argv, ' ');
		if (!p)
			return (0);
	}
	else
		p = NULL;
	if (push_first_argument(p, head, argv) == 0)
		return (0);
	return (1);
}

static int	after_first_argument(char *argv[], t_list **head, int index)
{
	char	**p;
	int		vld;
	int		num;

	vld = 1;
	while (argv[index])
	{
		if (!check_integer(argv[index]))
			return (0);
		if (check_nmb(argv[index]) > 1)
		{
			p = ft_split(argv[index], ' ');
			if (!p || !process_numbers(p, head, 0))
				return (0);
		}
		else
		{
			num = ft_atoi(argv[index], &vld);
			if (!vld)
				return (0);
			add_at_end(head, num);
		}
		index++;
	}
	return (1);
}

int	push_argument(char *argv[], t_list **head)
{
	if (first_argument(argv[1], head) == 0)
		return (0);
	if (after_first_argument(argv, head, 2) == 0)
		return (0);
	return (1);
}
