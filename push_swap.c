/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:49:12 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:49:13 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "lib_linksList/lib_linksList.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = (t_list *)malloc(sizeof(t_list));
	stack_b = NULL;
	if (!argv[1] || ((check_nmb(argv[1])) == 1 && !argv[2]))
		return (0);
	if (!push_argument(argv, stack_a))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (!check_double(stack_a))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (check_sort(&stack_a) != 1)
		return (0);
	algorithm(&stack_a, &stack_b);
}
