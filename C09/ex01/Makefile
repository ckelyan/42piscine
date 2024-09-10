CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCLUDES = includes

OBJ = $(SRC:.c=.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJ)
	ar -crs libft.a $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $< -o $@ -I$(INCLUDES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
