#include "../push_swap.h"
#include "../ft_printf/ft_printf.h"

int check_sort(t_list **stack_a)
{
    t_list *ptr;
    ptr = *stack_a;
    int tmp = ptr->data;
    int vld = 0;
    while (ptr != NULL)
    {
        if (vld == 1)
        {
            if (ptr->data <= tmp)
                return 1;
            tmp = ptr->data;
        }
        vld = 1;
        ptr = ptr->link;
    }
    free(ptr);
    return 0;
}
