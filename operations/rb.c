#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_rb(t_list **stack_b, char vld)
{
    ft_rotate(stack_b);
    if (vld != 'N')
        ft_printf("rb\n");
}