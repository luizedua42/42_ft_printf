NAME = libftprintf.a

OBJ  = $(SRC:%.c=%.o)

SRC  = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_base_low.c ft_putnbr_base_up.c ft_put_uns_nbr.c ft_put_p.c

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
