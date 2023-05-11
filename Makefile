CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONUS_NAME = checker
SRC =  main.c utils.c utils2.c ft_strjoin.c movements.c check_sort.c calculate_intructions.c\
		  sortone.c sort3.c sort4.c sort5.c sort100.c index_allitems.c parsing.c \
		  list_params.c ft_error.c list_params2.c movements2.c
OBJ = $(SRC:.c=.o)
BONUS_SRC = checker.c parsing.c ft_strjoin.c utils.c  movement_bonus.c movements_bonus2.c\
			utils2.c ft_error.c list_params2.c list_params.c  get_next_line.c \
				get_next_line_utils.c check_sort.c\

BONUS_OBJ = $(BONUS_SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all
