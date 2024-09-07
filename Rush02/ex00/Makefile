GG = gcc

FLAGS = -Wall -Werror -Wextra

SRC = src/ft_preprocess.c src/main_test.c

OBJ_DIR = target
OBJ = $(SRC:src/%.c=$(OBJ_DIR)/%.o)

PROG = PROG

all: $(PROG)

$(PROG): $(OBJ)
	$(GG) $(FLAGS) -o $(PROG) $(OBJ)

$(OBJ_DIR)/%.o: src/%.c
	@mkdir -p $(OBJ_DIR)
	$(GG) $(FLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

rm: clean
	rm -f $(PROG)

.PHONY: all clean rm