

SRC = ft_split_bonus.c ft_strlen_bonus.c ft_strdup_bonus.c ft_substr_bonus.c ft_atoi_bonus.c 

OBJS = ${SRC:.c=.o}

NAME = libft.a

LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@


clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

