
#include "../checker.h"

int check_sort(t_check **stack_a)
{
    t_check *ptr;
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
