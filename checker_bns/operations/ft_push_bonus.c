#include "operations.h"

void ft_push(t_check **from, t_check **to)
{
    t_check *tmp;
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
