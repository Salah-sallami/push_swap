/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 00:47:46 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/13 20:36:39 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "checker.h"
#include "lib_linksList/lib_linksList.h"
#include "next_line/get_next_line.h"
#include "operations/operations.h"

static int	check_new_line(char *move)
{
	while (*move)
		move++;
	if (*(move - 1) == '\n')
		return (1);
	return (0);
}

static int	check_str(char *move, char *str)
{
	int	i;

	i = 0;
	while (move[i] != '\n')
	{
		if (move[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

static int	process(t_check **stack_a, t_check **stack_b, char *move)
{
	if (check_str(move, "pb"))
		ft_pb(stack_a, stack_b);
	else if (check_str(move, "pa"))
		ft_pa(stack_a, stack_b);
	else if (check_str(move, "sb"))
		ft_sb(stack_b);
	else if (check_str(move, "sa"))
		ft_sa(stack_a);
	else if (check_str(move, "ss"))
		ft_ss(stack_a, stack_b);
	else if (check_str(move, "ra"))
		ft_ra(stack_a);
	else if (check_str(move, "rb"))
		ft_rb(stack_b);
	else if (check_str(move, "rr"))
		ft_rr(stack_a, stack_b);
	else if (check_str(move, "rra"))
		ft_rra(stack_a);
	else if (check_str(move, "rrb"))
		ft_rrb(stack_b);
	else if (check_str(move, "rrr"))
		ft_rrr(stack_a, stack_b);
	else
		return (ft_printf("Error\n"), 0);
	return (1);
}

static int	read_moves(t_check **stack_a, t_check **stack_b)
{
	char	*move;

	move = get_next_line(STDIN_FILENO);
	while (move)
	{
		if (!process(stack_a, stack_b, move))
			return (0);
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

	stack_a = malloc(sizeof(t_check));
	stack_b = NULL;
	if (!argv[1] || (check_nmb(argv[1]) && !argv[2]) || !push_argument(argv,
			stack_a) || !check_double(stack_a))
		return (ft_printf("Error\n"), 0);
	if (check_sort(&stack_a) != 1)
		return (0);
	if (read_moves(&stack_a, &stack_b) != 1)
		return (0);
	if (check_sort(&stack_a) == 1)
		return (ft_printf("KO"), 0);
	if (stack_b)
		return (ft_printf("KO"));
	else
		return (ft_printf("OK"));
}
