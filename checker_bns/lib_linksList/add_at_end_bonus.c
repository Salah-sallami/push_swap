#include "../checker.h"

void add_at_end(t_check *head, int data)
{
	t_check *ptr;
	t_check *tmp;
	ptr = head;
	tmp = (t_check *)malloc(sizeof(t_check));
	tmp->data = data;
	tmp->link = NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = tmp;
}