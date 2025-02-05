#include "../push_swap.h"
#include "../operations/operations.h"


void Keep_3_in_stack_a(t_list **stack_a, t_list **stack_b)
{
	int number = 0;
	t_list *tmp;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		number++;
		tmp = tmp->link;
	}
	tmp = NULL;
	while (number > 3)
	{
		ft_pb(stack_a, stack_b);
		number--;
	}
}