#include "../push_swap.h"
#include "../operations/operations.h"
#include "lib_linksList.h"

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
	
}
