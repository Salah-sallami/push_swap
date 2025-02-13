#include "../push_swap.h"
#include "../operations/operations.h"
#include "lib_linksList.h"
#include "../ft_printf/ft_printf.h"

static void take_minData_to_head(t_list **stack_a)
{
	// int size = ft_lstsize(*stack_a);
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
	// ft_printf("min_data = %d", index);
	if (index <= (ft_lstsize(*stack_a) / 2))
	{
		while (index--)
		{
			ft_ra(stack_a);
		}
	}
	else
	{
		index = ft_lstsize(*stack_a) - index;
		while (index--)
		{
			ft_rra(stack_a);
		}
	}
}

// static int check_data(t_list **stack_a, int data_a, int data_b)
// {
// 	t_list *tmp_a = *stack_a;
// 	int index;

// 	while (tmp_a)
// 	{

// 		//  ft_printf("%d >= %d && %d > %d \n",data_a,tmp_a->data , tmp_a->data ,data_b);
// 		if (data_a >= tmp_a->data && tmp_a->data > data_b)
// 		{
// 			data_a = tmp_a->data;
// 			index = tmp_a->index;
// 			// ft_printf("tmp_a->index =%d =ok\n",tmp_a->index);
// 		}
// 		tmp_a = tmp_a->link;
// 	}
// 	// ft_printf("index =%d =ok\n",index);

// 	return index;
// }

// static void target_bb(t_list **stack_a, t_list **stack_b)
// {
// 	t_list *tmp_b;
// 	t_list *tmp_a;

// 	if (!stack_a || !stack_b || !*stack_b)
// 		return;

// 	tmp_b = *stack_b;
// 	while (tmp_b)
// 	{
// 		tmp_a = *stack_a;

// 		int min = tmp_a->data;
// 		int index = tmp_a->index;
// 		while (tmp_a)
// 		{
// 			if (tmp_a->data < min)
// 			{
// 				min = tmp_a->data;
// 				index = tmp_a->index;
// 			}
// 			tmp_a = tmp_a->link;
// 		}

// 		tmp_b->target = index;
// 		tmp_a = *stack_a;

// 		while (tmp_a)
// 		{

// 			if (tmp_b->data < tmp_a->data)
// 			{
// 				add_index(stack_a, stack_b);
// 				tmp_b->target = check_data(stack_a, tmp_a->data, tmp_b->data);
// 				// ft_printf("tmp_b->data  (%d)\n",tmp_b->target);

// 				break;
// 			}

// 			tmp_a = tmp_a->link;
// 		}

// 		tmp_b = tmp_b->link;
// 	}
// }

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
	// ft_printf("======\n");
	// add_index(stack_a, stack_b);
	// target_bb(stack_a, stack_b);
	// ft_ra(stack_a);
	// ft_pa(stack_a, stack_b);
	// add_index(stack_a, stack_b);
	// target_bb(stack_a, stack_b);
	// ft_rb(stack_b);
	// ft_pa(stack_a, stack_b);
	// add_index(stack_a, stack_b);
	// target_bb(stack_a, stack_b);


	////////////////////////////
	target_b(stack_a, stack_b);
	// ft_pa(stack_a, stack_b);
	// target_b(stack_a, stack_b);
	// ft_pa(stack_a, stack_b);
	// target_b(stack_a, stack_b);


	add_index(stack_a, stack_b);

	take_minData_to_head(stack_a);
}
