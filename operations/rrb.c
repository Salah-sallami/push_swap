#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_rrb(t_list **stack_b , char vld)
{
    ft_reverse_rotate(stack_b);
    if (vld != 'N')
    ft_printf("rrb\n");
}