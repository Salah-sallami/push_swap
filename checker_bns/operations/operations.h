#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <stdlib.h>
#include "../checker.h"

void ft_push(t_check **from, t_check **to);
void ft_pb(t_check **stack_a, t_check **stack_b);
void ft_pa(t_check **stack_a, t_check **stack_b);
void ft_swap(t_check **head_stack);
void ft_sa(t_check **stack_a);
void ft_sb(t_check **stack_b);
void ft_ss(t_check **stack_a ,t_check **stack_b);
void ft_rotate(t_check **head_stack);
void ft_ra(t_check **stack_a);
void ft_rb(t_check **stack_b );
void ft_rr(t_check **stack_a ,t_check **stack_b);
void ft_reverse_rotate(t_check **head_stack);
void ft_rra(t_check **stack_a);
void ft_rrb(t_check **stack_b);
void ft_rrr(t_check **stack_a ,t_check **stack_b);

#endif
