#include "../push_swap.h"
#include "../ft_printf/ft_printf.h"

void add_index(t_list **stack_a, t_list **stack_b)
{

    t_list *tmp_a = *stack_a;
    t_list *tmp_b = *stack_b;
    int i = 0;
    while (tmp_a != NULL)
    {
        tmp_a->index = i;
        i++;
        tmp_a = tmp_a->link;
    }
    i = 0;
    while (tmp_b != NULL)
    {
        tmp_b->index = i;
        i++;
        tmp_b = tmp_b->link;
    }
}
