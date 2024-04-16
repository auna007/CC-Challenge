CC = cc
SRC = my_mastermind_functions.c random_generator.c  my_mastermind.c
OBJ = $(SRC:.c=.o)
NAME = my_mastermind
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -I/home/docode/project
all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
