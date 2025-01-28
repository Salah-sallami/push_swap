#include "ft_printf/ft_printf.h"
#include "push_swap.h"
#include "libft/libft.h"

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
void add_at_end(a *head, int data)
{
    a *ptr;
    a *tmp;
    ptr = head;
    tmp = (a *)malloc(sizeof(a));
    tmp->data = data;
    tmp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = tmp;
}
int check_double(a *head)
{
    a *ptr;
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

int push_argument(char *argv[] , a *head)
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
    a *head = (a *)malloc(sizeof(a));

    if(!push_argument(argv , head))
    {
        ft_printf("Error\n");
        return 0;
    }

    if (!check_double(head))
    {
        ft_printf("Error\n");
        return 0;
    }


    ft_printf("| a |\n");
    ft_printf("------\n");
    while (head != NULL)
    {
        ft_printf("| %d |\n", head->data);
        head = head->link;
    }
}
