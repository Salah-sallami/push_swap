#include "../push_swap.h"

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