#include "ft_printf/ft_printf.h"
#include "push_swap.h"
#include "lib_linksList/lib_linksList.h"

int main(int argc, char *argv[])
{
	t_list *stack_a = (t_list *)malloc(sizeof(t_list));
	t_list *stack_b = NULL;

	if (!argv[1] || ((check_nmb(argv[1])) == 1 && !argv[2]))
		return 0;

	if (!push_argument(argv, stack_a))
	{
		ft_printf("Error\n");
		return 0;
	}

	if (!check_double(stack_a))
	{
		ft_printf("Error\n");
		return 0;
	}
	
	if (check_sort(&stack_a) != 1)
		return 0;

	algorithm(&stack_a, &stack_b);

	// ft_printf("| stack a |\n");
	// ft_printf("-----------\n");
	// while (stack_a != NULL)
	// {
	// 	ft_printf("| %d | index => %d | target => %d | total => %d\n", stack_a->data, stack_a->index, stack_a->target , stack_a->total_moves);
	// 	stack_a = stack_a->link;
	// }

	// ft_printf("\n\n| stack b |\n");
	// ft_printf("-----------\n");
	// while (stack_b != NULL)
	// {
	// 	ft_printf("| %d | index => %d | target => %d | total => %d\n", stack_b->data, stack_b->index, stack_b->target , stack_b->total_moves);
	// 	stack_b = stack_b->link;
	// }
}
