/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:49:12 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/22 01:33:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_list **stack_a)
{
	t_list	*tmp;

	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->link;
		free(tmp);
	}
}

static int	check_one_argument_is_maxint(char *str_one)
{
	int	vld;
	int	num;

	vld = 1;
	num = ft_atoi(str_one, &vld);
	if (!vld)
		return (0);
	return (1);
}

static void	free_error(t_list **stack_a)
{
	write(2, "Error\n", 6);
	free_stack(stack_a);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (argc == 1 || !argv[1] || ((check_nmb(argv[1])) == 1 && !argv[2]))
	{
		if (argv[1] && !check_one_argument_is_maxint(argv[1]))
			free_error(&stack_a);
		return (free_stack(&stack_a), 0);
	}
	if (!push_argument(argv, &stack_a))
		free_error(&stack_a);
	if (!check_double(stack_a))
		free_error(&stack_a);
	if (check_sort(&stack_a) == 1)
		algorithm(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
