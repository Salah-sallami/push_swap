/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:02:43 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 22:02:47 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>

typedef struct node
{
	int			data;
	int			index;
	int			target;
	int			total_moves;
	struct node	*link;
}				t_check;

#endif
