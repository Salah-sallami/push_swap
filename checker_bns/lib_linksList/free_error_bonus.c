/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:43:38 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/22 01:46:40 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	free_error(t_check **stack_a)
{
	t_check	*tmp;

	write(2, "Error\n", 6);
	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->link;
		free(tmp);
	}
	exit(1);
}
