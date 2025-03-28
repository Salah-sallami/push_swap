/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 00:47:46 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/28 08:18:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	check_new_line(char *move)
{
	while (*move)
		move++;
	if (*(move - 1) == '\n')
		return (1);
	return (0);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	if (s1[i] - s2[i] == 0)
		return (1);
	return (0);
}

static int	process(t_check **stack_a, t_check **stack_b, char *move)
{
	if (ft_strcmp(move, "pb\n"))
		ft_pb(stack_a, stack_b);
	else if (ft_strcmp(move, "pa\n"))
		ft_pa(stack_a, stack_b);
	else if (ft_strcmp(move, "sb\n"))
		ft_sb(stack_b);
	else if (ft_strcmp(move, "sa\n"))
		ft_sa(stack_a);
	else if (ft_strcmp(move, "ss\n"))
		ft_ss(stack_a, stack_b);
	else if (ft_strcmp(move, "ra\n"))
		ft_ra(stack_a);
	else if (ft_strcmp(move, "rb\n"))
		ft_rb(stack_b);
	else if (ft_strcmp(move, "rr\n"))
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(move, "rra\n"))
		ft_rra(stack_a);
	else if (ft_strcmp(move, "rrb\n"))
		ft_rrb(stack_b);
	else if (ft_strcmp(move, "rrr\n"))
		ft_rrr(stack_a, stack_b);
	else
		free_error(stack_a);
	return (1);
}

static int	read_moves(t_check **stack_a, t_check **stack_b)
{
	char	*move;

	move = get_next_line(STDIN_FILENO);
	while (move != NULL)
	{
		if (!check_new_line(move))
			break ;
		if (!process(stack_a, stack_b, move))
			return (free(move), 0);
		free(move);
		move = get_next_line(STDIN_FILENO);
	}
	free(move);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_check	*stack_a;
	t_check	*stack_b;

	if (argc == 1)
		return (0);
	stack_a = malloc(sizeof(t_check));
	stack_b = NULL;
	if (!argv[1] || (check_nmb(argv[1]) && !argv[2]) || !push_argument(argv,
			&stack_a) || !check_double(stack_a))
		free_error(&stack_a);
	if (read_moves(&stack_a, &stack_b) != 1)
		return (0);
	if (check_sort(&stack_a) == 1)
		return (ft_printf("KO"), 0);
	if (stack_b)
		return (ft_printf("KO"));
	else
		return (ft_printf("OK"));
}
