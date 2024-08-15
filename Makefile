CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONUS_NAME = checker

# Define the source and object files for the mandatory part
SRC = srcs/main.c srcs/utils.c srcs/utils2.c srcs/ft_strjoin.c srcs/movements.c srcs/check_sort.c \
	  srcs/calculate_intructions.c srcs/sortone.c srcs/sort3.c srcs/sort4.c srcs/sort5.c \
	  srcs/sort100.c srcs/index_allitems.c srcs/parsing.c srcs/list_params.c srcs/ft_error.c \
	  srcs/list_params2.c srcs/movements2.c
OBJ = $(SRC:.c=.o)

# Define the source and object files for the bonus part
BONUS_SRC = srcs/checker.c srcs/parsing.c srcs/ft_strjoin.c srcs/utils.c srcs/movement_bonus.c \
			srcs/movements_bonus2.c srcs/utils2.c srcs/ft_error.c srcs/list_params2.c srcs/list_params.c \
			srcs/get_next_line.c srcs/get_next_line_utils.c srcs/check_sort.c srcs/movement_bonus3.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Rules for building the project
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for creating object files from C files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Cleaning up object files
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Full clean, including executable files
fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

# Rebuild everything
re: fclean all
