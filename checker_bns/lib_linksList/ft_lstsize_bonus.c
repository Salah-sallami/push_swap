
#include "lib_linksList.h"

int		ft_lstsize(t_check *lst)
{
	int		count;
	t_check	*temp;

	count = 0;
	temp = (t_check*)lst;
	while (temp)
	{
		count++;
		temp = temp->link;
	}
	return (count);
}