CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap.a
SRC = push_swap_input_handler.c push_swap.c presort.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) LIBFT
	ar -cq $(NAME) $(OBJ)

LIBFT :
	make -C libft

test : re
	clear && $(CC) main.c $(NAME) libft/libft.a && make clean && clear

clean :
	- rm -f $(OBJ)
	@ make clean -C libft

fclean : clean
	- rm -f $(NAME)
	@ make fclean -C libft

re : fclean all

.PHONY: LIBFT clean fclean re
