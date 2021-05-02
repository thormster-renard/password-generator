
#CFLAGS= -W -Wall -ansi -std=c99 -pedantic -Wextra -Werror
CFLAGS=	-g3

LIB=	-lm

NAME=	passwd-gen

SRC=	$(wildcard *.c)

OBJ=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	clean fclean all
