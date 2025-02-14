#include "../push_swap.h"
#include "../ft_printf/ft_printf.h"
#include "../lib_linksList/lib_linksList.h"
#include "../operations/operations.h"

static int check_data(t_list **stack_a, int data_a, int data_b)
{
    t_list *tmp_a = *stack_a;
    int index = 0;

    while (tmp_a)
    {

        //  ft_printf("%d >= %d && %d > %d \n",data_a,tmp_a->data , tmp_a->data ,data_b);
        if (data_a >= tmp_a->data && tmp_a->data > data_b)
        {
            data_a = tmp_a->data;
            index = tmp_a->index;
            // ft_printf("tmp_a->index =%d =ok\n",tmp_a->index);
        }
        tmp_a = tmp_a->link;
    }
    // ft_printf("index =%d =ok\n",index);

    return index;
}

static void target_bb(t_list **stack_a, t_list **stack_b)
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
                add_index(stack_a, stack_b);
                tmp_b->target = check_data(stack_a, tmp_a->data, tmp_b->data);
                // ft_printf("tmp_b->data  (%d)\n",tmp_b->target);

                break;
            }

            tmp_a = tmp_a->link;
        }

        tmp_b = tmp_b->link;
    }
}

static void push_min_move(t_list **stack_a, t_list **stack_b, int min_moves)
{
    t_list *tmp_b;
    t_list *tmp_a;
    tmp_b = *stack_b;
    tmp_a = *stack_a;

    while (tmp_b && tmp_b->total_moves != min_moves)
        tmp_b = tmp_b->link;

    if (!tmp_b)
        return;

    int loop_a = 0;
    int loop_b = 0;
    int loop_a_b = 0;

    if (tmp_b->index <= (ft_lstsize(*stack_b) / 2))
    {
        if (tmp_b->target <= (ft_lstsize(*stack_a) / 2))
        {
            // ft_printf("1\n");
            // 10 - 5 = 5 tf_rr -> (5 > 0) 5 ft_ra
            // 5 - 8 = -3 -> * -1 -> 3 tf_rr -> (-3 < 0) 3 ft_ra
            // 5 - 5 = 0 -> 5 rr

            loop_a = tmp_b->target;
            loop_b = tmp_b->index;
            // if (loop_a == loop_b)
            // {
            //     loop_a_b = loop_a;
            //     while (loop_a_b--)
            //         ft_rr(stack_a, stack_b);
            // }
            // else if (loop_a > loop_b)
            // {
            //     loop_a_b = loop_b;
            //     loop_a = loop_a - loop_b;
            //     while (loop_a_b--)
            //         ft_rr(stack_a, stack_b);
            //     while (loop_a--)
            //         ft_ra(stack_a);
            // }
            // else if (loop_a < loop_b)
            // {
            //     loop_a_b = loop_a;
            //     loop_b = loop_b - loop_a;
            //     while (loop_a_b--)
            //         ft_rr(stack_a, stack_b);
            //     while (loop_b--)
            //         ft_rb(stack_b);
            // }

            //             loop_a = tmp_b->target;
            // loop_b = tmp_b->index;

            if (loop_a >= 0 && loop_b >= 0) // تجنب القيم السالبة
            {
                if (loop_a == loop_b)
                {
                    loop_a_b = loop_a;
                    while (loop_a_b-- > 0) // تأكد أنه كيوقف عند الصفر
                        ft_rr(stack_a, stack_b);
                }
                else if (loop_a > loop_b)
                {
                    loop_a_b = loop_b;
                    loop_a -= loop_b;
                    while (loop_a_b-- > 0)
                        ft_rr(stack_a, stack_b);
                    while (loop_a-- > 0)
                        ft_ra(stack_a, 'Y');
                }
                else if (loop_a < loop_b)
                {
                    loop_a_b = loop_a;
                    loop_b -= loop_a;
                    while (loop_a_b-- > 0)
                        ft_rr(stack_a, stack_b);
                    while (loop_b-- > 0)
                        ft_rb(stack_b , 'Y');
                }
            }

            // while (loop_a--)
            // {
            //     ft_ra(stack_a);
            // }
            // while (loop_b--)
            // {
            //     ft_rb(stack_b);
            // }
        }
        else
        {
            loop_a = ft_lstsize(*stack_a) - tmp_b->target;
            loop_b = tmp_b->index;
            while (loop_a--)
            {
                ft_rra(stack_a,'Y');
            }
            while (loop_b--)
            {
                ft_rb(stack_b , 'Y');
            }
        }
    }
    else
    {
        if (tmp_b->target <= (ft_lstsize(*stack_a) / 2))
        {
            loop_a = tmp_b->target;
            loop_b = ft_lstsize(*stack_b) - tmp_b->index;
            while (loop_a--)
            {
                ft_ra(stack_a, 'Y');
            }
            while (loop_b--)
            {
                ft_rrb(stack_b,'Y');
            }
        }
        else
        {
            loop_a = ft_lstsize(*stack_a) - tmp_b->target;
            loop_b = ft_lstsize(*stack_b) - tmp_b->index;

            if (loop_a == loop_b)
            {
                loop_a_b = loop_a;
                while (loop_a_b--)
                    ft_rrr(stack_a, stack_b);
            }
            else if (loop_a > loop_b)
            {
                loop_a_b = loop_b;
                loop_a = loop_a - loop_b;
                while (loop_a_b--)
                    ft_rrr(stack_a, stack_b);
                while (loop_a--)
                    ft_rra(stack_a , 'Y');
            }
            else if (loop_a < loop_b)
            {
                loop_a_b = loop_a;
                loop_b = loop_b - loop_a;
                while (loop_a_b--)
                    ft_rrr(stack_a, stack_b);
                while (loop_b--)
                    ft_rrb(stack_b , 'Y');
            }

            // while (loop_a--)
            // {
            //     ft_rra(stack_a);
            // }
            // while (loop_b--)
            // {
            //     ft_rrb(stack_b);
            // }
        }
    }
    // ft_pa(stack_a, stack_b);

    // add_index(stack_a, stack_b);
}

void target_b(t_list **stack_a, t_list **stack_b)
{

    if (!stack_a || !stack_b || !*stack_b)
    {
        return;
    }

    t_list *tmp_b;
    t_list *tmp_a;

    tmp_b = *stack_b;
    tmp_a = *stack_a;

    target_bb(stack_a, stack_b);
    // add_index(stack_a, stack_b);

    while (tmp_b)
    {
        if (tmp_b->index <= (ft_lstsize(*stack_b) / 2))
        {
            // ft_printf("tmp_b->target===> %d \n",tmp_b->target);

            if (tmp_b->target <= (ft_lstsize(*stack_a) / 2))
            {
                tmp_b->total_moves = tmp_b->index + tmp_b->target + 1;
                // ft_printf("10\n");
            }
            else
            {
                tmp_b->total_moves = tmp_b->index + ft_lstsize(*stack_a) - tmp_b->target + 1; // 0 + 5 - 3
            }
        }
        else
        {
            if (tmp_b->target <= (ft_lstsize(*stack_a) / 2))
            {
                tmp_b->total_moves = ft_lstsize(*stack_b) - tmp_b->index + tmp_b->target + 1;
                // ft_printf("30\n");
            }
            else
            {
                tmp_b->total_moves = ft_lstsize(*stack_b) - tmp_b->index + ft_lstsize(*stack_a) - tmp_b->target + 1;
                // ft_printf("40\n");
            }
        }

        tmp_b = tmp_b->link;
    }

    tmp_b = *stack_b;

    int min_moves = tmp_b->total_moves;
    // ft_printf("min %d\n", min_moves);
    while (tmp_b)
    {
        if (!tmp_b)
            return;
        if (tmp_b->total_moves < min_moves)
            min_moves = tmp_b->total_moves;

        tmp_b = tmp_b->link;
    }
    // ft_printf("min %d\n", min_moves);

    tmp_b = *stack_b;
    tmp_a = *stack_a;
    while (tmp_b)
    {
        if (tmp_b->total_moves == min_moves)
        {
            push_min_move(stack_a, stack_b, min_moves);
            ft_pa(stack_a, stack_b);

            add_index(stack_a, stack_b);

            if (!*stack_b)
                return;

            target_b(stack_a, stack_b);
            break;
        }
        tmp_b = tmp_b->link;
    }
}
