#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_rotate(t_list **head_stack)
{
    t_list *tmp;
    t_list *head;
    tmp = *head_stack;
    head = *head_stack;
    if ((*head_stack)->link == NULL)
        return;

    *head_stack = head->link;
    while (head->link != NULL)
        head = head->link;

    head->link = tmp;
    tmp->link = NULL;
}
