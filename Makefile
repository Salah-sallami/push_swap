
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

OBJS = ${SRC:.c=.o}

HEADERS = ${push_swap.h ft_printf/ft_printf.h lib_linksList/lib_linksList.h libft/libft.h operations/operations.h}

NAME = libftprintf.a

LIBC = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -r

all: ${NAME}
	${CC} ${NAME} push_swap.c -o push_swap

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}


%.o: %.c $(HEADERS)
	${CC} ${CFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all