
SRC =		ft_putchar_bonus.c ft_printf_bonus.c ft_putnbr_bonus.c ft_putstr_bonus.c \
			ft_conversions_bonus.c ft_hex_uppercase_bonus.c ft_putnbr_u_bonus.c \
			ft_hex_lowercase_bonus.c ft_hex_p_bonus.c \

OBJS = ${SRC:.c=.o}

NAME = ft_printf.a

LIBC = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@


clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

