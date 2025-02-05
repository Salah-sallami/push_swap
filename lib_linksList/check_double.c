#include "../push_swap.h"

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