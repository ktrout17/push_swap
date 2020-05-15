NAME = push_swap.a

LIBFT = libft/libft.a

CHECKER = checker checker.c

PUSH_SWAP = push_swap push_swap.c

FLAGS = -Wall -Wextra -Werror

LINKLIBFT = @gcc -I. -o

SRC = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cd libft && make
	@gcc $() -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	$(LINKLIBFT) $(CHECKER) $(NAME) $(LIBFT)
	$(LINKLIBFT) $(PUSH_SWAP) $(NAME) $(LIBFT)
	@echo "push_swap.a compiled successfully"

clean:
	cd libft && make clean
	@/bin/rm -f $(OBJ)

fclean: clean
	cd libft && make fclean
	@/bin/rm -f $(NAME)
	@/bin/rm -f checker
	@/bin/rm -f push_swap

re: fclean all