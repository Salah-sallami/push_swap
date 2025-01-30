#include "ft_printf/ft_printf.h"
#include "push_swap.h"
#include "libft/libft.h"
#include "operations/operations.h"

int check_integer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }

        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i + 1] >= '0' && str[i + 1] <= '9' && (i == 0 || str[i - 1] == ' '))
            {
                i++;
                continue;
            }
            return 0;
        }

        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;
            continue;
        }
        return 0;
    }

    return 1;
}

int check_nmb(char *str)
{
    int i = 0;
    int vld = 1;
    int cont_nmb = 0;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9' && vld == 1)
        {
            cont_nmb++;
            vld = 0;
        }
        if (str[i] == ' ')
            vld = 1;
        i++;
    }
    return cont_nmb;
}
void add_at_end(t_list *head, int data)
{
    t_list *ptr;
    t_list *tmp;
    ptr = head;
    tmp = (t_list *)malloc(sizeof(t_list));
    tmp->data = data;
    tmp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = tmp;
}
int check_double(t_list *head)
{
    t_list *ptr;
    ptr = head;
    while (head != NULL)
    {
        while (ptr != NULL)
        {
            if ((ptr->data == head->data) && (ptr->link != head->link))
            {
                return 0;
            }
            ptr = ptr->link;
        }
        head = head->link;
        ptr = head;
    }
    return 1;
}

int push_argument(char *argv[], t_list *head)
{
    char **p;
    int i;
    int j;

    ///////first argument//////
    if ((check_integer(argv[1]) == 0))
        return 0;
    if ((check_nmb(argv[1])) != 0)
    {
        p = malloc(sizeof(int) * (check_nmb(argv[1])));
        p = ft_split(argv[1], ' ');
        head->data = atoi(p[0]);
        head->link = NULL;
        j = 1;
        while (p[j])
            add_at_end(head, atoi(p[j++]));
        free(p);
    }
    else
    {

        head->data = atoi(argv[1]);
        head->link = NULL;
    }

    ///////after first argument/////////
    i = 2;
    while (argv[i])
    {
        if ((check_integer(argv[i]) == 0))
            return 0;
        if ((check_nmb(argv[i])) != 0)
        {
            p = malloc(sizeof(int) * (check_nmb(argv[i])));
            p = ft_split(argv[i], ' ');
            j = 0;
            while (p[j])
                add_at_end(head, atoi(p[j++]));
            free(p);
        }
        else
            add_at_end(head, atoi(argv[i]));
        i++;
    }
    return 1;
}


int main(int argc, char *argv[])
{
    t_list *stack_a = (t_list *)malloc(sizeof(t_list));
    t_list *stack_b = NULL;

    if(!argv[1])
        return 0;

    if (!push_argument(argv, stack_a))
    {
        ft_printf("Error\n");
        return 0;
    }

    if (!check_double(stack_a))
    {
        ft_printf("Error\n");
        return 0;
    }

    // ft_pb(&stack_a,&stack_b);
    // ft_pb(&stack_a,&stack_b);
    // ft_pa(&stack_a,&stack_b);
    // ft_pb(&stack_a,&stack_b);


    // ft_printf("%p\n",stack_b);
    ft_sb(&stack_b);
    // ft_ra(&stack_a);
    // ft_rrb(&stack_b);

    // ft_rrb(&stack_b);
    // ft_rra(&stack_a);
    // ft_rrr(&stack_a,&stack_b);

    
 


    // ft_printf("| stack a |\n");
    // ft_printf("-----------\n");
    // while (stack_a != NULL)
    // {
    //     ft_printf("| %d |\n", stack_a->data);
    //     stack_a = stack_a->link;
    // }

    // ft_printf("\n\n| stack b |\n");
    // ft_printf("-----------\n");
    // while (stack_b != NULL)
    // {
    //     ft_printf("| %d |\n", stack_b->data);
    //     stack_b = stack_b->link;
    // }


}
