NAME = libftfprintf.a

OBJ  = $(SRC:%.c=%.o)

SRC  = ft_printf_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putnbr_base_low_fd.c ft_putnbr_base_up_fd.c ft_put_uns_nbr_fd.c ft_put_p_fd.c

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all
