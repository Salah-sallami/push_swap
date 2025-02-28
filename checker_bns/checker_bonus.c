#include "next_line/get_next_line.h"
#include "stdio.h"
#include "checker.h"
#include "lib_linksList/lib_linksList.h"
#include "../ft_printf/ft_printf.h"
#include "operations/operations.h"

static int check_new_line(char *move)
{
	while (*move)
		move++;
	if (*(move - 1) == '\n')
		return 1;
	return 0;
}
static int check_str(char *move, char *str)
{
	int i = 0;
	while (move[i] != '\n')
	{
		if (move[i] != str[i])
			return 0;
		i++;
	}
	return 1;
}

static int process(t_check **stack_a, t_check **stack_b, char *move)
{
	if (check_str(move, "pb"))
		ft_pb(stack_a, stack_b);
	else if (check_str(move, "pa"))
		ft_pa(stack_a, stack_b);
	else if (check_str(move, "sb"))
		ft_sb(stack_b);
	else if (check_str(move, "sa"))
		ft_sa(stack_a);
	else if (check_str(move, "ss"))
		ft_ss(stack_a, stack_b);
	else if (check_str(move, "ra"))
		ft_ra(stack_a);
	else if (check_str(move, "rb"))
		ft_rb(stack_b);
	else if (check_str(move, "rr"))
		ft_rr(stack_a, stack_b);
	else if (check_str(move, "rra"))
		ft_rra(stack_a);
	else if (check_str(move, "rrb"))
		ft_rrb(stack_b);
	else if (check_str(move, "rrr"))
		ft_rrr(stack_a, stack_b);
	else
	{
		ft_printf("Error\n");
		return 0;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	char *move = NULL;

	t_check *stack_a = (t_check *)malloc(sizeof(t_check));
	t_check *stack_b = NULL;

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

	int vld = 0;
	move = get_next_line(STDIN_FILENO);
	while (move != NULL)
	{
		vld = process(&stack_a, &stack_b, move);
		if (vld == 0)
			return 0;
		move = get_next_line(STDIN_FILENO);
	}

	t_check *tmp_a = stack_a;
	int min_data = tmp_a->data;

	tmp_a = tmp_a->link;
	while (tmp_a != NULL)
	{
		if (min_data > tmp_a->data)
		{
			ft_printf("KO");
			return 0;
		}
		min_data = tmp_a->data;
		tmp_a = tmp_a->link;
	}

	if (stack_b)
		ft_printf("KO");
	else
		ft_printf("OK");

}