#include "operations.h"

void ft_reverse_rotate(t_check **head_stack)
{
    t_check *tmp;
    t_check *head;
    tmp = *head_stack;
    head = *head_stack;
     if ((*head_stack) == NULL )
        return;
    if ((*head_stack)->link == NULL)
        return;

    while ((*head_stack)->link != NULL)
        (*head_stack) = (*head_stack)->link;

    (*head_stack)->link = tmp;
    
    while ((*head_stack) != head->link)
        head = head->link;

    head->link = NULL;
}
