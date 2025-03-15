
SRCS =	push_swap.c \
		operations/pa.c operations/pb.c operations/ft_push.c \
		operations/sa.c operations/sb.c operations/ft_swap.c operations/ss.c \
		operations/ft_rotate.c operations/ra.c operations/rb.c operations/rr.c \
		operations/ft_reverse_rotate.c operations/rra.c operations/rrb.c operations/rrr.c \
		libft/ft_split.c libft/ft_strlen.c libft/ft_strdup.c \
		libft/ft_substr.c libft/ft_atoi.c \
		lib_linksList/ft_lstsize.c lib_linksList/check_integer.c lib_linksList/check_nmb.c \
		lib_linksList/add_at_end.c lib_linksList/check_double.c lib_linksList/push_argument.c \
		lib_linksList/push_b.c lib_linksList/Keep_3_in_stack_a.c lib_linksList/sort.c \
		lib_linksList/algorithm.c lib_linksList/check_sort.c lib_linksList/push_target_b.c \
		lib_linksList/add_index.c lib_linksList/target_b_for_a.c lib_linksList/push_min_moves.c \
		lib_linksList/find_target_node.c lib_linksList/ft_lstnew.c lib_linksList/free_split.c \
		ft_printf/ft_putchar.c ft_printf/ft_printf.c ft_printf/ft_putnbr.c \
		ft_printf/ft_putstr.c ft_printf/ft_conversions.c ft_printf/ft_hex_uppercase.c \
		ft_printf/ft_putnbr_u.c ft_printf/ft_hex_lowercase.c ft_printf/ft_hex_p.c



 


SRCS_BS = checker_bns/checker_bonus.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

NAME_BONUS = checker

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror



all: ${NAME}

${NAME}: ${OBJS}  
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c $< -o $@


bonus: checker_bns
	@make -C checker_bns 


clean:
	@make clean -C checker_bns
	@rm -rf $(OBJS) $(BOBJECTS)

fclean: clean
	@make fclean -C checker_bns
	@rm -rf $(NAME)
	

re: fclean all