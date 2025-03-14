/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:49:12 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 01:01:10 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "lib_linksList/lib_linksList.h"
#include "libft/libft.h"
#include "push_swap.h"

void	free_stack(t_list **stack_a)
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

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;


	stack_b = NULL;
	if (!argv[1] || ((check_nmb(argv[1])) == 1 && !argv[2]))
	{
		if (argv[1] && !check_one_argument_is_maxint(argv[1]))
			return (ft_printf("Error\n"), free_stack(&stack_a), 0);
		return (free_stack(&stack_a), 0);
	}
	if (!push_argument(argv, &stack_a))
	{
		ft_printf("Error\n");
		return (free_stack(&stack_a), 0);
	}
	if (!check_double(stack_a))
	{
		ft_printf("Error\n");
		return (free_stack(&stack_a), 0);
	}
	if (check_sort(&stack_a) == 1)
		algorithm(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
