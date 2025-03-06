

SRC = ft_lstsize_bonus.c check_integer_bonus.c check_nmb_bonus.c add_at_end_bonus.c \
	 check_double_bonus.c push_argument_bonus.c check_sort_bonus.c 

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

