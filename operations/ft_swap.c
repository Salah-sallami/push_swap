#include "operations.h"
#include "../ft_printf/ft_printf.h"

void ft_swap(t_list **head_stack)
{
    t_list *tmp;
    tmp = *head_stack;
    if ((*head_stack) == NULL )
        return;
    if ((*head_stack)->link == NULL)
        return;
    *head_stack = (*head_stack)->link;
    tmp->link = (*head_stack)->link;
    (*head_stack)->link = tmp;
    
}
