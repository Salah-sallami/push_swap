

SRC =		pa_bonus.c pb_bonus.c ft_push_bonus.c sa_bonus.c sb_bonus.c ft_swap_bonus.c \
			ss_bonus.c ft_rotate_bonus.c ra_bonus.c rb_bonus.c rr_bonus.c \
			ft_reverse_rotate_bonus.c rra_bonus.c rrb_bonus.c rrr_bonus.c 

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

