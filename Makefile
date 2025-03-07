

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



all:
	make  -C lib_linksList all
	make  -C operations all
	make  -C ft_printf all
	make  -C libft all
	${CC} ${INCLUDES} push_swap.c -o ${NAME_OUTPUT}



bonus:
	make -C checker_bns/lib_linksList all
	make -C checker_bns/operations all
	make -C checker_bns/next_line all
	make -C checker_bns/ft_printf all
	make -C checker_bns/libft all
	${CC} ${INCLUDES_BONUS} checker_bns/checker_bonus.c -o ${NAME_OUTPUT_BONUS}




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

re: fclean all