/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:02:43 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/15 02:54:45 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

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
}				t_check;

/////////==== OPERATIONS ====////////
void			ft_push(t_check **from, t_check **to);
void			ft_pb(t_check **stack_a, t_check **stack_b);
void			ft_pa(t_check **stack_a, t_check **stack_b);
void			ft_swap(t_check **head_stack);
void			ft_sa(t_check **stack_a);
void			ft_sb(t_check **stack_b);
void			ft_ss(t_check **stack_a, t_check **stack_b);
void			ft_rotate(t_check **head_stack);
void			ft_ra(t_check **stack_a);
void			ft_rb(t_check **stack_b);
void			ft_rr(t_check **stack_a, t_check **stack_b);
void			ft_reverse_rotate(t_check **head_stack);
void			ft_rra(t_check **stack_a);
void			ft_rrb(t_check **stack_b);
void			ft_rrr(t_check **stack_a, t_check **stack_b);

/////////==== GET_NEXT_LINE ====////////
char			*ft_strjoin(char *s1, char *s2);
int				ft_strchr(char *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*get_after_newline(char *str);
char			*get_befor_newline(char **str);
char			*get_next_line(int fd);

/////////==== LIBFT ====////////
char			**ft_split(const char *s, char c);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s1);
int				ft_atoi(char *str, int *vld);

/////////==== LIB_LINKSLIST ====////////
int				ft_lstsize(t_check *lst);
int				check_integer(char *str);
int				check_nmb(char *str);
void			add_at_end(t_check **head, int data);
int				check_double(t_check *head);
int				push_argument(char *argv[], t_check **head);
int				check_sort(t_check **stack_a);
t_check			*ft_lstnew(int content);
void			free_split(char **p);

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
