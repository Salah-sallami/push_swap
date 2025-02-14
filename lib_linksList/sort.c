#include "../push_swap.h"
#include "../operations/operations.h"
#include "lib_linksList.h"

void sort(t_list **stack_a)
{

	if (ft_lstsize(*stack_a) == 2)
	{
		int a = (*stack_a)->data;
		int b = (*stack_a)->link->data;
		if (a > b)
		{
			ft_sa(stack_a);
			return ;
		}
		return;
	}
	int a = (*stack_a)->data;
	int b = (*stack_a)->link->data;
	int c = (*stack_a)->link->link->data;

	if (a < c && a < b && c < b)
	{
		ft_ra(stack_a,'Y');
		ft_sa(stack_a);
		ft_rra(stack_a,'Y');
	}
	else if (b < a && b < c && a < c)
		ft_sa(stack_a);
	else if (b < c && b < a && c < a)
		ft_ra(stack_a,'Y');
	else if (c < b && c < a && b < a)
	{
		ft_ra(stack_a,'Y');
		ft_sa(stack_a);
	}
	else if (c < a && c < b && a < b)
		ft_rra(stack_a,'Y');

}