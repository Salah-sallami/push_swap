#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_pa(t_list **stack_a, t_list **stack_b)
{
    ft_push(stack_b, stack_a);
    ft_printf("pa\n");
}