#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_ss(t_list **stack_a ,t_list **stack_b)
{
    ft_swap(stack_a);
    ft_swap(stack_b);
    ft_printf("ss\n");
}