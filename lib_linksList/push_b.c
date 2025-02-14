#include "../push_swap.h"
#include "../operations/operations.h"
#include "../ft_printf/ft_printf.h"
#include "lib_linksList.h"

void push_b(t_list **stack_a, t_list **stack_b, int value, int number)
{
	t_list *tmp;
	tmp = *stack_a;
	int loop = 0;
	//remove number
	(void)number;
	// ft_printf("|number %d |\n", number / 2);

	while (*stack_a != NULL && ft_lstsize(*stack_a) > 3)
	{
			// ft_printf("value = %d | (*stack_a)->data = %d\n",value , (*stack_a)->data);
		if ((*stack_a)->data < value)
		{
			*stack_a = tmp;
			tmp = NULL;
			if (loop <= (ft_lstsize(*stack_a) / 2))
			{
				while (loop)
				{
					ft_ra(stack_a,'Y');
					loop--;
				}
			}
			else
			{
				loop = ft_lstsize(*stack_a) - loop;
				while (loop)
				{
					ft_rra(stack_a,'Y');
					loop--;
				}
			}

			ft_pb(stack_a, stack_b);
			// number--;
			tmp = *stack_a;
		}
		else
		{
			loop++;
			*stack_a = (*stack_a)->link;
		}
	}
	*stack_a = tmp;
}