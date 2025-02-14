#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_rrr(t_list **stack_a ,t_list **stack_b)
{
    ft_rra(stack_a,'N');
    ft_rrb(stack_b,'N');
    ft_printf("rrr\n");
}