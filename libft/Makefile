NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OBJ = *.o
SRC = *.c
OPTIONS = -c

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
