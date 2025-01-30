#include "operations.h"
#include "../ft_printf/ft_printf.h"


void ft_ra(t_list **stack_a)
{
    ft_rotate(stack_a);
    ft_printf("ra\n");
}