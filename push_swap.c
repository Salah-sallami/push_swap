#include "ft_printf/ft_printf.h"
#include "push_swap.h"
#include "libft/libft.h"
#include "operations/operations.h"

int check_integer(char *str)
{
	int i = 0;
	if (!str[0])
		return 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			if (str[i] == '\0')
				return 0;
			continue;
		}

		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= '0' && str[i + 1] <= '9' && (i == 0 || str[i - 1] == ' '))
			{
				i++;
				continue;
			}
			return 0;
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue;
		}
		return 0;
	}

	return 1;
}

int check_nmb(char *str)
{
	int i = 0;
	int vld = 1;
	int cont_nmb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' && vld == 1)
		{
			cont_nmb++;
			vld = 0;
		}
		if (str[i] == ' ')
			vld = 1;
		i++;
	}
	return cont_nmb;
}
void add_at_end(t_list *head, int data)
{
	t_list *ptr;
	t_list *tmp;
	ptr = head;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->link = NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = tmp;
}
int check_double(t_list *head)
{
	t_list *ptr;
	ptr = head;
	while (head != NULL)
	{
		while (ptr != NULL)
		{
			if ((ptr->data == head->data) && (ptr->link != head->link))
			{
				return 0;
			}
			ptr = ptr->link;
		}
		head = head->link;
		ptr = head;
	}
	return 1;
}

int push_argument(char *argv[], t_list *head)
{
	char **p;
	int i;
	int j;

	///////first argument//////
	if ((check_integer(argv[1]) == 0))
		return 0;
	if ((check_nmb(argv[1])) != 0)
	{
		p = malloc(sizeof(int) * (check_nmb(argv[1])));
		p = ft_split(argv[1], ' ');
		head->data = atoi(p[0]);
		head->link = NULL;
		j = 1;
		while (p[j])
			add_at_end(head, atoi(p[j++]));
		free(p);
	}
	else
	{

		head->data = atoi(argv[1]);
		head->link = NULL;
	}

	///////after first argument/////////
	i = 2;
	while (argv[i])
	{
		if ((check_integer(argv[i]) == 0))
			return 0;
		if ((check_nmb(argv[i])) != 0)
		{
			p = malloc(sizeof(int) * (check_nmb(argv[i])));
			p = ft_split(argv[i], ' ');
			j = 0;
			while (p[j])
				add_at_end(head, atoi(p[j++]));
			free(p);
		}
		else
			add_at_end(head, atoi(argv[i]));
		i++;
	}
	return 1;
}

static void push_b(t_list **stack_a, t_list **stack_b, int value, int number)
{
	t_list *tmp;
	tmp = *stack_a;
	int loop = 0;
	ft_printf("|number %d |\n", number / 2);

	while (*stack_a != NULL)
	{
		if ((*stack_a)->data <= value)
		{
			*stack_a = tmp;
			tmp = NULL;
			if (loop <= (number / 2))
			{
				while (loop)
				{
					ft_ra(stack_a);
					loop--;
				}
			}
			else
			{
				loop = number - loop;
				while (loop)
				{
					ft_rra(stack_a);
					loop--;
				}
			}

			ft_pb(stack_a, stack_b);
			number--;
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

static void Keep_3_in_stack_a(t_list **stack_a, t_list **stack_b)
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
	ft_printf("| %d |\n", number);
	while (number > 3)
	{
		ft_pb(stack_a, stack_b);
		number--;
	}
}
static void sort(t_list **stack_a)
{
	int number = 0;
	int value = 0;
	t_list *tmp;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		number++;
		tmp = tmp->link;
	}
	tmp = NULL;
	if (number <= 1)
		return;
	else if (number == 2)
	{
		int a = (*stack_a)->data;
		int b = (*stack_a)->link->data;
		if (a > b)
		{
			ft_swap(stack_a);
			return ;
		}
		return;
	}
	int a = (*stack_a)->data;
	int b = (*stack_a)->link->data;
	int c = (*stack_a)->link->link->data;

	if (a < c && a < b && c < b)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (b < a && b < c && a < c)
		ft_sa(stack_a);
	else if (b < c && b < a && c < a)
		ft_ra(stack_a);
	else if (c < b && c < a && b < a)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (c < a && c < b && a < b)
		ft_rra(stack_a);

}

static void algo(t_list **stack_a, t_list **stack_b)
{
	/////// sum data | number data /////////
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
	ft_printf("|value = %d |\n", value);

	push_b(stack_a, stack_b, value, number);
	Keep_3_in_stack_a(stack_a, stack_b);
	sort(stack_a);
}

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

	algo(&stack_a, &stack_b);

	ft_printf("| stack a |\n");
	ft_printf("-----------\n");
	while (stack_a != NULL)
	{
		ft_printf("| %d |\n", stack_a->data);
		stack_a = stack_a->link;
	}

	ft_printf("\n\n| stack b |\n");
	ft_printf("-----------\n");
	while (stack_b != NULL)
	{
		ft_printf("| %d |\n", stack_b->data);
		stack_b = stack_b->link;
	}
}
