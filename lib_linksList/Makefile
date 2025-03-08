
SRC =	ft_lstsize.c check_integer.c check_nmb.c add_at_end.c \
		check_double.c push_argument.c push_b.c Keep_3_in_stack_a.c \
 		sort.c algorithm.c check_sort.c push_target_b.c add_index.c \
		target_b_for_a.c push_min_moves.c find_target_node.c

OBJS = ${SRC:.c=.o}

NAME = lib_linksList.a

LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c lib_linksList.h
	${CC} ${CFLAGS} -c $< -o $@


clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

