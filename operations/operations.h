/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:18:05 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/14 00:51:40 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../push_swap.h"

void	ft_push(t_list **from, t_list **to);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_swap(t_list **head_stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **head_stack);
void	ft_ra(t_list **stack_a, char vld);
void	ft_rb(t_list **stack_b, char vld);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate(t_list **head_stack);
void	ft_rra(t_list **stack_a, char vld);
void	ft_rrb(t_list **stack_b, char vld);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

#endif
