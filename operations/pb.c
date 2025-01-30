#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_pb(t_list **stack_a, t_list **stack_b)
{
    ft_push(stack_a, stack_b);
    ft_printf("pb\n");
}