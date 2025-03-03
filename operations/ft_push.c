#include "operations.h"

void ft_push(t_list **from, t_list **to)
{
    t_list *tmp;
    tmp = *from;
    if(*from == NULL)
        return;
        
    *from = (*from)->link;
    if (to == NULL)
        tmp->link = NULL;
    else
        tmp->link = *to;
    *to = tmp;

}
