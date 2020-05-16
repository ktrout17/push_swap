NAME = libft.a
FLAGS = -Wall  -Wextra 
OBJ = *.o
SRC = *.c
OPTIONS = -c

all : $(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "___________________________________"
	@echo "\nlibft compiled successfully"
	@echo "___________________________________\n"

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
