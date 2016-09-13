CC	= gcc

NAME	= octocat

SRC	= main.c func/my_putchar.c func/my_putstr.c func/readline.c func/my_aff_tab.c func/my_strcmp.c func/mode.c func/casu.c func/my_put_nbr.c func/check.c func/hardcore.c func/hcheck.c func/chel.c func/ttb.c

FLAG	= -W -Wall -Werror

OBJ	= $(SRC:%.c=%.o)

RM	= rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(FLAG)

all:		$(NAME)

clean:		
		$(RM) $(OBJ)
fclean:		clean
		$(RM) $(NAME)