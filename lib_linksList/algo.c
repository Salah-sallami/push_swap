#include "../push_swap.h"
#include "../operations/operations.h"
#include "lib_linksList.h"
#include "../ft_printf/ft_printf.h"

static void take_minData_to_head(t_list **stack_a)
{
	int size = ft_lstsize(*stack_a);
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
	// ft_printf("min = %d", index);
	if (index <= (size / 2))
	{
		while (index--)
		{
			ft_ra(stack_a);
		}
	}
	else
	{
		index = size - index ;
		while (index--)
		{
			ft_rra(stack_a);
		}
	}
}

void algo(t_list **stack_a, t_list **stack_b)
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

	push_b(stack_a, stack_b, value, number);
	Keep_3_in_stack_a(stack_a, stack_b);
	sort(stack_a);

	t_list *tmp_b = *stack_b;
	int loop_head;
	int i = ft_lstsize(tmp_b);
	int new_size = ft_lstsize(*stack_a);

	while (i--)
	{
		if (!(*stack_b))
			return;

		add_index(stack_a, stack_b);
		target_b(stack_a, stack_b);
		loop_head = (*stack_b)->target;
		new_size = ft_lstsize(*stack_a);
		if (loop_head <= (new_size / 2))
		{
			while (loop_head)
			{
				if (*stack_a && (*stack_a)->link)
					ft_ra(stack_a);
				loop_head--;
			}
		}
		else
		{
			loop_head = new_size - loop_head;
			while (loop_head)
			{
				if (*stack_a && (*stack_a)->link)
					ft_rra(stack_a);
				loop_head--;
			}
		}

		ft_pa(stack_a, stack_b);

		if (!(*stack_b))
			break;
	}
	add_index(stack_a, stack_b);

	take_minData_to_head(stack_a);
}
