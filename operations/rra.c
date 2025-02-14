#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_rra(t_list **stack_a, char vld)
{
    ft_reverse_rotate(stack_a);
    if (vld != 'N')
        ft_printf("rra\n");
}