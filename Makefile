CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = push_swap.a
VPATH = actions
SRC = push_swap_input_handler.c push_swap.c presort.c push_swap_coder.c push.c swap.c action_utils.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	ar -cq $(NAME) $(OBJ)

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
