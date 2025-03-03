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

SRC_BONUS = checker_bns/lib_linksList/ft_lstsize_bonus.c checker_bns/lib_linksList/check_integer_bonus.c checker_bns/lib_linksList/check_nmb_bonus.c checker_bns/lib_linksList/add_at_end_bonus.c \
			checker_bns/lib_linksList/check_double_bonus.c checker_bns/lib_linksList/push_argument_bonus.c checker_bns/lib_linksList/check_sort_bonus.c \
			checker_bns/next_line/get_next_line_bonus.c checker_bns/next_line/get_next_line_utils_bonus.c \
			checker_bns/ft_printf/ft_putchar_bonus.c checker_bns/ft_printf/ft_printf_bonus.c checker_bns/ft_printf/ft_putnbr_bonus.c checker_bns/ft_printf/ft_putstr_bonus.c \
			checker_bns/ft_printf/ft_conversions_bonus.c checker_bns/ft_printf/ft_hex_uppercase_bonus.c checker_bns/ft_printf/ft_putnbr_u_bonus.c \
			checker_bns/ft_printf/ft_hex_lowercase_bonus.c checker_bns/ft_printf/ft_hex_p_bonus.c \
			checker_bns/operations/pa_bonus.c checker_bns/operations/pb_bonus.c checker_bns/operations/ft_push_bonus.c checker_bns/operations/sa_bonus.c checker_bns/operations/sb_bonus.c checker_bns/operations/ft_swap_bonus.c \
			checker_bns/operations/ss_bonus.c checker_bns/operations/ft_rotate_bonus.c checker_bns/operations/ra_bonus.c checker_bns/operations/rb_bonus.c checker_bns/operations/rr_bonus.c \
			checker_bns/operations/ft_reverse_rotate_bonus.c checker_bns/operations/rra_bonus.c checker_bns/operations/rrb_bonus.c checker_bns/operations/rrr_bonus.c \
			checker_bns/libft/ft_split_bonus.c checker_bns/libft/ft_strlen_bonus.c checker_bns/libft/ft_strdup_bonus.c checker_bns/libft/ft_substr_bonus.c checker_bns/libft/ft_atoi_bonus.c \


OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

HEADERS = push_swap.h ft_printf/ft_printf.h lib_linksList/lib_linksList.h libft/libft.h operations/operations.h

HEADERS_BONUS = checker_bns/checker.h checker_bns/ft_printf/ft_printf.h checker_bns/lib_linksList/lib_linksList.h checker_bns/libft/libft.h checker_bns/operations/operations.h checker_bns/next_line/get_next_line.h

NAME = libft_push_swap.a

NAME_BONUS = libft_push_swap_bonus.a

NAME_OUTPUT = push_swap

NAME_OUTPUT_BONUS = checker

LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}
	${CC} ${NAME} push_swap.c -o ${NAME_OUTPUT}


${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}


bonus: ${NAME_BONUS}
	${CC} ${NAME_BONUS} checker_bns/checker_bonus.c -o ${NAME_OUTPUT_BONUS}

${NAME_BONUS}: ${OBJS_BONUS}
	${LIBC} ${NAME_BONUS} ${OBJS_BONUS}


%.o: %.c ${HEADERS} ${HEADERS_BONUS} 
	${CC} ${CFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME} ${NAME_BONUS}

re: fclean all