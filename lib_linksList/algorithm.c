#include "../push_swap.h"
#include "../operations/operations.h"
#include "lib_linksList.h"
#include "../ft_printf/ft_printf.h"

static void take_minData_to_head(t_list **stack_a)
{
	t_list *tmp;
	tmp = *stack_a;
	int min = tmp->data;
	int index = tmp->index;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			index = tmp->index;
		}
		tmp = tmp->link;
	}
	if (index <= (ft_lstsize(*stack_a) / 2))
	{
		while (index--)
			ft_ra(stack_a,'Y');
	}
	else
	{
		index = ft_lstsize(*stack_a) - index;
		while (index--)
			ft_rra(stack_a,'Y');
	}
}

void algorithm(t_list **stack_a, t_list **stack_b)
{
	int sum = 0;
	int number = 0;
	int value = 0;
	t_list *tmp;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		sum += tmp->data;
		number++;
		tmp = tmp->link;
	}
	tmp = NULL;
	value = sum / number;

	push_b(stack_a, stack_b, value);
	Keep_3_in_stack_a(stack_a, stack_b);
	sort(stack_a);
	push_target_b(stack_a, stack_b);
	add_index(stack_a, stack_b);
	take_minData_to_head(stack_a);
}
