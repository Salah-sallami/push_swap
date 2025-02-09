#include "../push_swap.h"
#include "../ft_printf/ft_printf.h"
////////////                      775173201     2000100680
int check_data(t_list **stack_a, int data_a, int data_b)
{
    t_list *tmp_a = *stack_a;
    int index;
    while (tmp_a)
    {
        if (data_a >= tmp_a->data && tmp_a->data > data_b)
        {
            data_a = tmp_a->data;
            index = tmp_a->index;
        }
        tmp_a = tmp_a->link;
    }

    return index;
}

void target_b(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp_b;
    t_list *tmp_a;

    if (!stack_a || !stack_b || !*stack_b)
        return;

    tmp_b = *stack_b;
    while (tmp_b)
    {
        tmp_a = *stack_a;

        
        int min = tmp_a->data;
        int index = tmp_a->index;
        while (tmp_a)
        {
            if (tmp_a->data < min)
            {
                min = tmp_a->data;
                index = tmp_a->index;
            }
            tmp_a = tmp_a->link;
        }


        tmp_b->target = index;
        tmp_a = *stack_a;

        while (tmp_a)
        {

            if (tmp_b->data < tmp_a->data)
            {
                // if(tmp_a->data )
                tmp_b->target = check_data(stack_a, tmp_a->data, tmp_b->data);
                // tmp_b->target = tmp_a->index;
                break;
            }

            tmp_a = tmp_a->link;
        }
      

        tmp_b = tmp_b->link;
    }
}
