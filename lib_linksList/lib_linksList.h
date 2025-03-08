/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_linksList.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:32:51 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/08 21:37:27 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_LINKSLIST_H
# define LIB_LINKSLIST_H

# include "../push_swap.h"

int		ft_lstsize(t_list *lst);
int		check_integer(char *str);
int		check_nmb(char *str);
void	add_at_end(t_list *head, int data);
int		check_double(t_list *head);
int		push_argument(char *argv[], t_list *head);
void	push_b(t_list **stack_a, t_list **stack_b, int value);
void	keep_3_in_stack_a(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack_a);
void	algorithm(t_list **stack_a, t_list **stack_b);
int		check_sort(t_list **stack_a);
void	push_target_b(t_list **stack_a, t_list **stack_b);
void	add_index(t_list **stack_a, t_list **stack_b);
void	target_b_for_a(t_list **stack_a, t_list **stack_b);
void	push_min_moves(t_list **stack_a, t_list **stack_b, int min_moves);
t_list	*find_target_node(t_list **stack_b, int min_moves);

#endif
