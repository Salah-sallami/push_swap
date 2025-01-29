
SRC = ft_printf/ft_putchar.c ft_printf/ft_printf.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c \
	ft_printf/ft_conversions.c ft_printf/ft_hex_uppercase.c ft_printf/ft_putnbr_u.c \
	ft_printf/ft_hex_lowercase.c ft_printf/ft_hex_p.c \
	libft/ft_split.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_substr.c \
	operations/pa.c operations/pb.c operations/ft_push.c operations/sa.c operations/sb.c operations/ft_swap.c \
	operations/ss.c operations/ft_rotate.c operations/ra.c operations/rb.c operations/rr.c \
	operations/ft_reverse_rotate.c operations/rra.c operations/rrb.c operations/rrr.c

OBJS = ${SRC:.c=.o}

NAME = libftprintf.a

LIBC = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -r

all: ${NAME}
	${CC} ${NAME} push_swap.c -o push_swap

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}


%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all