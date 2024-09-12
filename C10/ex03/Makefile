CC = cc
FLAGS = -Wall -Werror -Wextra

SRC = ft_hexdump.c ft_utils.c

OBJ = $(SRC:.c=.o)

INCL = .

BIN = ft_hexdump

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(FLAGS) -o $(BIN) $(OBJ)

%.o: %.c $(INCLUDE)/%.h
	$(CC) $(FLAGS) -c $< -o $@ -I$(INCL)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)

re: fclean all

.PHONY: all clean fclean re
