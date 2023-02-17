CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = push_swap
VPATH = actions sorts utils
SRC = thougty_bubble2.c utils.c presort.c push.c swap.c rev_rotate.c rotate.c main.c issort.c push_swap_input_handler.c\
sort_under_6.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $^ libft/*.o -o $(NAME)

test : $(NAME) comp clean
	 - rm $(NAME)

comp :
	clear && $(CC) main.c $(NAME) libft/libft.a

clean :
	- rm -f $(OBJ)
	@ make clean -C libft

fclean : clean
	- rm -f $(NAME)
	- rm -f a.out
	@ make fclean -C libft

re : fclean all

.PHONY: LIBFT clean fclean re
