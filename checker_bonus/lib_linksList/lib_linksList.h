#ifndef LIB_LINKSLIST_H
#define LIB_LINKSLIST_H

#include "../checker.h"

int		ft_lstsize(t_check *lst);
int check_integer(char *str);
int check_nmb(char *str);
void add_at_end(t_check *head, int data);
int check_double(t_check *head);
int push_argument(char *argv[], t_check *head);
int check_sort(t_check **stack_a);

#endif
