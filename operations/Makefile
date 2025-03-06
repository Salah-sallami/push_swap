
SRC =		pa.c pb.c ft_push.c sa.c sb.c ft_swap.c \
			ss.c ft_rotate.c ra.c rb.c rr.c \
			ft_reverse_rotate.c rra.c rrb.c rrr.c 

OBJS = ${SRC:.c=.o}

NAME = operations.a

LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c operations.h
	${CC} ${CFLAGS} -c $< -o $@


clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

