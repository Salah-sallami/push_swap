/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 00:46:52 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 01:06:34 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct node
{
	int			data;
	int			index;
	int			target;
	int			total_moves;
	struct node	*link;
}				t_list;

/////////==== OPERATIONS ====////////
void			ft_push(t_list **from, t_list **to);
void			ft_pb(t_list **stack_a, t_list **stack_b);
void			ft_pa(t_list **stack_a, t_list **stack_b);
void			ft_swap(t_list **head_stack);
void			ft_sa(t_list **stack_a);
void			ft_sb(t_list **stack_b);
void			ft_ss(t_list **stack_a, t_list **stack_b);
void			ft_rotate(t_list **head_stack);
void			ft_ra(t_list **stack_a, char vld);
void			ft_rb(t_list **stack_b, char vld);
void			ft_rr(t_list **stack_a, t_list **stack_b);
void			ft_reverse_rotate(t_list **head_stack);
void			ft_rra(t_list **stack_a, char vld);
void			ft_rrb(t_list **stack_b, char vld);
void			ft_rrr(t_list **stack_a, t_list **stack_b);

/////////==== LIBFT ====////////
char			**ft_split(const char *s, char c);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_atoi(char *str, int *vld);

/////////==== LIB_LINKSLIST ====////////
void			free_split(char **p);
t_list			*ft_lstnew(int content);
int				ft_lstsize(t_list *lst);
int				check_integer(char *str);
int				check_nmb(char *str);
void			add_at_end(t_list **head, int data);
int				check_double(t_list *head);
int				push_argument(char *argv[], t_list **head);
void			push_b(t_list **stack_a, t_list **stack_b, int value);
void			keep_3_in_stack_a(t_list **stack_a, t_list **stack_b);
void			sort(t_list **stack_a);
void			algorithm(t_list **stack_a, t_list **stack_b);
int				check_sort(t_list **stack_a);
void			push_target_b(t_list **stack_a, t_list **stack_b);
void			add_index(t_list **stack_a, t_list **stack_b);
void			target_b_for_a(t_list **stack_a, t_list **stack_b);
void			push_min_moves(t_list **stack_a, t_list **stack_b,
					int min_moves);
t_list			*find_target_node(t_list **stack_b, int min_moves);

/////////==== FT_PRINTF ====////////
int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_conversions(char c, va_list list);
int				ft_hex_lowercase(unsigned int x);
int				ft_hex_uppercase(unsigned int x);
int				ft_hex_p(unsigned long x);
int				ft_putnbr_u(unsigned int nb);
int				ft_printf(const char *foramt, ...);

#endif
