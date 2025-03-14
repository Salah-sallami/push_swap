
SRCS = push_swap.c

SRCS_BS = checker_bns/checker_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BS = $(SRCS_BS:.c=.o)

NAME = push_swap

NAME_BONUS = checker

RM = rm -rf



INCLUDES =	libft/libft.a \
			lib_linksList/lib_linksList.a \
			ft_printf/ft_printf.a \
			operations/operations.a \

INCLUDES_BONUS =	checker_bns/libft/libft.a \
					checker_bns/lib_linksList/lib_linksList.a \
					checker_bns/ft_printf/ft_printf.a \
					checker_bns/operations/operations.a \
					checker_bns/next_line/next_line.a \


all: ${NAME}

${NAME}: ${OBJS}  
	make  -C lib_linksList
	make  -C operations
	make  -C ft_printf
	make  -C libft
	${CC} ${INCLUDES} ${OBJS}  -o ${NAME}

%.o: %.c 
	${CC} -c $< -o $@

bonus: ${NAME_BONUS}

${NAME_BONUS}: ${OBJS_BS}
	make -C checker_bns/lib_linksList all
	make -C checker_bns/operations all
	make -C checker_bns/next_line all
	make -C checker_bns/ft_printf all
	make -C checker_bns/libft all
	${CC} ${INCLUDES_BONUS} ${OBJS_BS} -o ${NAME_BONUS}




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
	${RM} ${OBJS} ${OBJS_BS} ${NAME} ${NAME_BONUS}
	

re: fclean all