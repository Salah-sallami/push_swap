#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_rb(t_list **stack_b)
{
    ft_rotate(stack_b);
    ft_printf("rb\n");
}