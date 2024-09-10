GG = cc

FLAGS = -Wall -Werror -Wextra
FLAGS_DEBUG = -g -fsanitize=address

SRC = $(wildcard src/*.c)

OBJ_DIR = target
OBJ = $(SRC:src/%.c=$(OBJ_DIR)/%.o)

PROG = prog
PROG_DEV = dev

all: $(PROG)

dev: $(PROG_DEV)

$(PROG): $(OBJ)
	$(GG) $(FLAGS) -o $(PROG) $(OBJ)

$(PROG_DEV): $(OBJ)
	$(GG) $(FLAGS) $(FLAGS_DEBUG) -o $(PROG_DEV) $(OBJ)

$(OBJ_DIR)/%.o: src/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(PROG)

.PHONY: all clean fclean
