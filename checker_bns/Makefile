NAME = ../checker

SOURCES =	checker_bonus.c \
			operations/pa_bonus.c operations/pb_bonus.c operations/ft_push_bonus.c \
			operations/sa_bonus.c operations/sb_bonus.c operations/ft_swap_bonus.c \
			operations/ss_bonus.c operations/ft_rotate_bonus.c operations/ra_bonus.c \
			operations/rb_bonus.c operations/rr_bonus.c operations/ft_reverse_rotate_bonus.c \
			operations/rra_bonus.c operations/rrb_bonus.c operations/rrr_bonus.c \
			next_line/get_next_line_bonus.c next_line/get_next_line_utils_bonus.c \
			libft/ft_split_bonus.c libft/ft_strlen_bonus.c libft/ft_strdup_bonus.c \
			libft/ft_substr_bonus.c libft/ft_atoi_bonus.c \
			lib_linksList/ft_lstsize_bonus.c lib_linksList/check_integer_bonus.c \
			lib_linksList/check_nmb_bonus.c lib_linksList/add_at_end_bonus.c \
			lib_linksList/check_double_bonus.c lib_linksList/push_argument_bonus.c lib_linksList/free_error_bonus.c \
			lib_linksList/check_sort_bonus.c lib_linksList/ft_lstnew_bonus.c lib_linksList/free_split_bonus.c \
			ft_printf/ft_putchar_bonus.c ft_printf/ft_printf_bonus.c \
			ft_printf/ft_putnbr_bonus.c ft_printf/ft_putstr_bonus.c \
			ft_printf/ft_conversions_bonus.c ft_printf/ft_hex_uppercase_bonus.c \
			ft_printf/ft_putnbr_u_bonus.c ft_printf/ft_hex_lowercase_bonus.c \
			ft_printf/ft_hex_p_bonus.c



OBJECTS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c push_swap_bonus.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all