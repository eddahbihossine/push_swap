CC= cc
CFLAGS=-Wall -Wextra -Werror -g

NAME= push_swap
SRC =  main.c utils.c utils2.c ft_strjoin.c movements.c check_sort.c  calculate_intructions.c\
		  sortone.c sort3.c sort4.c sort5.c sort100.c index_allitems.c parsing.c \
		 list_params.c ft_error.c list_params2.c movements2.c \

OBJ=$(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ 

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(OBJ2) $(OBJ_BONUS) $(OBJ2_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME2) $(NAME_BONUS) $(NAME2_BONUS)

re: fclean all bonus