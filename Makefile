NAME = gnl

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf 


SRC = src/main.c src/get_next_line_utils.c src/get_next_line.c 

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	fclean all 

full:
	valgrind --leak-check=full