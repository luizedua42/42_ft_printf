NAME = libftprintf.a

OBJ  = $(SRC:%.c=%.o)

SRC  = ft_printf.c

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
