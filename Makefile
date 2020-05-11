NAME = push_swap.a
LIB = libft
LIB.A = libft.a
LIB_SRC = libft/*.c
LIB_OBJ = libft/*.o
FLAGS = -Wall -Wextra
OPTIONS = -c
OBJ = push_swap.o checker.o
PS_SRC = push_swap.h src/push_swap/mainProgram.c src/push_swap/findMedian.c src/push_swap/stackA_func.c src/push_swap/stackB_func.c src/push_swap/algo.c libft/*.c
CH_SRC = push_swap.h src/checker/mainProgram.c src/checker/inputCmds.c libft/*.c
SHARED_SRC = push_swap.h src/shared/operations.c src/shared/stackBuilder.c libft/*.c

all: push_swap checker

push_swap:
	gcc $(FLAGS) $(PS_SRC) -o push_swap

checker:
	gcc $(FLAGS) $(CH_SRC) -o checker

clean:
	/bin/rm -f $(OBJ) $(LIB_OBJ) *.o

fclean: clean
	/bin/rm -f push_swap checker

re: fclean all

# INCLUDES = -I libft/Includes -I.

# LIB = libft

# LIB.A = libft.a

# CH_SRC_NAME = checker/mainProgram.c checker/inputCmds.c

# P_SRC_NAME = push_swap/mainProgram.c push_swap/findMedian.c push_swap/stackA_func.c push_swap/stackB_func.c push_swap/algo.c

# CO_SRC_NAME = shared/operations.c shared/stackBuilder.c

# SRC_PATH = src

# CH_OBJ_NAME = $(CO_SRC_NAME:.c=.o) $(CH_SRC_NAME:.c=.o)

# P_OBJ_NAME = $(CO_SRC_NAME:.c=.o) $(P_SRC_NAME:.c=.o)

# OBJ_PATH = obj

# CH_SRC = $(addprefix $(SRC_PATH)/, $(CH_SRC_NAME))

# P_SRC = $(addprefix $(SRC_PATH)/, $(P_SRC_NAME))

# CO_SRC = $(addprefix $(SRC_PATH)/ $(CO_SRC_NAME))

# CH_OBJ = $(addprefix $(OBJ_PATH)/, $(CH_OBJ_NAME))

# P_OBJ = $(addprefix $(OBJ_PATH)/, $(P_OBJ_NAME))

# NAME_C = checker

# NAME_P = push_swap

# FLAGS = -Wall -Wextra

# all : library $(NAME_C) $(NAME_P)

# library :
# 	make -C $(LIB)

# $(NAME_C) : $(CH_OBJ)
# 	gcc -o $@ $(CH_OBJ) $(INCLUDES) $(LIB)/$(LIB.A) -g

# $(NAME_P) : $(P_OBJ)
# 	gcc -o $@ $(P_OBJ) $(INCLUDES) $(LIB)/$(LIB.A) -g

# $(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
# 	@mkdir -p $(OBJ_PATH)
# 	@mkdir -p $(dir $(P_OBJ))
# 	@mkdir -p $(dir $(CH_OBJ))
# 	gcc -o $@ -c $< $(INCLUDES) $(FLAGS) -g

# clean :
# 	rm -fr $(OBJ_PATH)
# 	make clean -C $(LIB)

# fclean : clean
# 	rm -f $(NAME_C)
# 	rm -f $(NAME_P)
# 	make fclean -C $(LIB)

# re : fclean all
