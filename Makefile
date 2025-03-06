# SRC = ft_printf/ft_putchar.c ft_printf/ft_printf.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c \
# 	ft_printf/ft_conversions.c ft_printf/ft_hex_uppercase.c ft_printf/ft_putnbr_u.c \
# 	ft_printf/ft_hex_lowercase.c ft_printf/ft_hex_p.c \
# 	libft/ft_split.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_substr.c libft/ft_atoi.c \
# 	operations/pa.c operations/pb.c operations/ft_push.c operations/sa.c operations/sb.c operations/ft_swap.c \
# 	operations/ss.c operations/ft_rotate.c operations/ra.c operations/rb.c operations/rr.c \
# 	operations/ft_reverse_rotate.c operations/rra.c operations/rrb.c operations/rrr.c \
# 	lib_linksList/ft_lstsize.c lib_linksList/check_integer.c lib_linksList/check_nmb.c lib_linksList/add_at_end.c \
# 	lib_linksList/check_double.c lib_linksList/push_argument.c lib_linksList/push_b.c lib_linksList/Keep_3_in_stack_a.c \
# 	lib_linksList/sort.c lib_linksList/algorithm.c lib_linksList/check_sort.c lib_linksList/push_target_b.c lib_linksList/add_index.c




# OBJS = ${SRC:.c=.o}


# HEADERS = push_swap.h ft_printf/ft_printf.h lib_linksList/lib_linksList.h libft/libft.h operations/operations.h

# HEADERS_BONUS = checker_bns/checker.h checker_bns/ft_printf/ft_printf.h checker_bns/lib_linksList/lib_linksList.h checker_bns/libft/libft.h checker_bns/operations/operations.h checker_bns/next_line/get_next_line.h

# NAME = push_swap.a

# NAME_BONUS = push_swap_bonus.a

NAME_OUTPUT = push_swap

NAME_OUTPUT_BONUS = checker

INCLUDES =	libft/libft.a \
			lib_linksList/lib_linksList.a \
			ft_printf/ft_printf.a \
			operations/operations.a \

INCLUDES_BONUS =	checker_bns/libft/libft.a \
					checker_bns/lib_linksList/lib_linksList.a \
					checker_bns/ft_printf/ft_printf.a \
					checker_bns/operations/operations.a \
					checker_bns/next_line/next_line.a \


LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${OBJS}
	make -C lib_linksList all
	make -C operations all
	make -C ft_printf all
	make -C libft all
	${CC} ${INCLUDES} push_swap.c -o ${NAME_OUTPUT}



bonus:
	make -C checker_bns/lib_linksList all
	make -C checker_bns/operations all
	make -C checker_bns/next_line all
	make -C checker_bns/ft_printf all
	make -C checker_bns/libft all
	${CC} ${INCLUDES_BONUS} checker_bns/checker_bonus.c -o ${NAME_OUTPUT_BONUS}



# %.o: %.c ${HEADERS} ${HEADERS_BONUS} 
# 	${CC} ${CFLAGS} -c $< -o $@


clean:
	make -C checker_bns/lib_linksList clean
	make -C checker_bns/operations clean
	make -C checker_bns/ft_printf clean
	make -C checker_bns/next_line clean
	make -C checker_bns/libft clean
	make -C lib_linksList clean
	make -C operations clean
	make -C ft_printf clean
	make -C libft clean
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	make -C checker_bns/lib_linksList fclean
	make -C checker_bns/operations fclean
	make -C checker_bns/ft_printf fclean
	make -C checker_bns/next_line fclean
	make -C checker_bns/libft fclean
	make -C lib_linksList fclean
	make -C operations fclean
	make -C ft_printf fclean
	make -C libft fclean
	${RM} ${NAME} ${NAME_BONUS}

re: fclean all