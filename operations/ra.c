#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_ra(t_list **stack_a , char vld)
{
    ft_rotate(stack_a);
    if (vld != 'N')
        ft_printf("ra\n");
}