
SRC = ft_split.c ft_strlen.c ft_strdup.c ft_substr.c ft_atoi.c 

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

