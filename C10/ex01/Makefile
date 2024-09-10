CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = ft_cat.c ft_utils.c
INCLUDE = .

OBJ = $(SRC:.c=.o)

EXEC = ft_cat

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(FLAGS) -o $(EXEC) $(OBJ)

%.o: %.c $(INCLUDE)/*.h
	$(CC) $(FLAGS) -c $< -I$(INCLUDE) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

.PHONY: all clean fclean
