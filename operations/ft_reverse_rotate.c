#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_reverse_rotate(t_list **head_stack)
{
    t_list *tmp;
    t_list *head;
    tmp = *head_stack;
    head = *head_stack;
    if ((*head_stack)->link == NULL)
        return;

    while ((*head_stack)->link != NULL)
        (*head_stack) = (*head_stack)->link;

    (*head_stack)->link = tmp;
    
    while ((*head_stack) != head->link)
        head = head->link;

    head->link = NULL;
}
