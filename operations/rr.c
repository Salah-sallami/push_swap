#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_rr(t_list **stack_a ,t_list **stack_b)
{
    ft_ra(stack_a);
    ft_rb(stack_b);
    ft_printf("rr\n");
}