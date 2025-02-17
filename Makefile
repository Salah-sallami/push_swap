
SRC = ft_printf/ft_putchar.c ft_printf/ft_printf.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c \
	ft_printf/ft_conversions.c ft_printf/ft_hex_uppercase.c ft_printf/ft_putnbr_u.c \
	ft_printf/ft_hex_lowercase.c ft_printf/ft_hex_p.c \
	libft/ft_split.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_substr.c libft/ft_atoi.c \
	operations/pa.c operations/pb.c operations/ft_push.c operations/sa.c operations/sb.c operations/ft_swap.c \
	operations/ss.c operations/ft_rotate.c operations/ra.c operations/rb.c operations/rr.c \
	operations/ft_reverse_rotate.c operations/rra.c operations/rrb.c operations/rrr.c \
	lib_linksList/ft_lstsize.c lib_linksList/check_integer.c lib_linksList/check_nmb.c lib_linksList/add_at_end.c \
	lib_linksList/check_double.c lib_linksList/push_argument.c lib_linksList/push_b.c lib_linksList/Keep_3_in_stack_a.c \
	lib_linksList/sort.c lib_linksList/algorithm.c lib_linksList/check_sort.c lib_linksList/push_target_b.c lib_linksList/add_index.c

SRC_BONUS = checker_bonus/lib_linksList/ft_lstsize.c checker_bonus/lib_linksList/check_integer.c checker_bonus/lib_linksList/check_nmb.c checker_bonus/lib_linksList/add_at_end.c \
			checker_bonus/lib_linksList/check_double.c checker_bonus/lib_linksList/push_argument.c checker_bonus/lib_linksList/check_sort.c \
			checker_bonus/next_line/get_next_line.c checker_bonus/next_line/get_next_line_utils.c \
			ft_printf/ft_putchar.c ft_printf/ft_printf.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c \
			ft_printf/ft_conversions.c ft_printf/ft_hex_uppercase.c ft_printf/ft_putnbr_u.c \
			ft_printf/ft_hex_lowercase.c ft_printf/ft_hex_p.c \
			checker_bonus/operations/pa.c checker_bonus/operations/pb.c checker_bonus/operations/ft_push.c checker_bonus/operations/sa.c checker_bonus/operations/sb.c checker_bonus/operations/ft_swap.c \
			checker_bonus/operations/ss.c checker_bonus/operations/ft_rotate.c checker_bonus/operations/ra.c checker_bonus/operations/rb.c checker_bonus/operations/rr.c \
			checker_bonus/operations/ft_reverse_rotate.c checker_bonus/operations/rra.c checker_bonus/operations/rrb.c checker_bonus/operations/rrr.c \
			checker_bonus/libft/ft_split.c checker_bonus/libft/ft_strlen.c checker_bonus/libft/ft_strdup.c checker_bonus/libft/ft_substr.c checker_bonus/libft/ft_atoi.c \


OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

HEADERS = ${push_swap.h ft_printf/ft_printf.h lib_linksList/lib_linksList.h libft/libft.h operations/operations.h}

NAME = libftprintf.a

NAME_BONUS = libftprintf_bonus.a

LIBC = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -r

all: ${NAME}
	${CC} ${NAME} push_swap.c -o push_swap


${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}


bonus: ${NAME_BONUS}
	${CC} ${NAME_BONUS} checker_bonus/checker.c -o checker

${NAME_BONUS}: ${OBJS_BONUS}
	${LIBC} ${NAME_BONUS} ${OBJS_BONUS}


%.o: %.c $(HEADERS) checker_bonus/checker.h
	${CC} ${CFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME} ${NAME_BONUS}

re: fclean all