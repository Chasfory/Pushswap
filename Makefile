##
## EPITECH PROJECT, 2021
## Pushswap
## File description:
## semestre1
##

SRC			=	src/main.c\
				src/algo.c\
				src/operation/pb_pa.c\
				src/operation/ra_rb.c\
				src/operation/rra_rrb.c\
				src/operation/sa_sb.c\
				src/algo_bis.c\

SRC_TEST	=	tests/test.c\

OBJ			=	$(SRC:.c=.o)

OBJ2		=	$(SRC:.c=.o)

NAME	=	push_swap

LIB_FOLDER	=	lib/my

CPPFLAGS	=	-I ./include/ -L $(LIB_FOLDER) -lmy

LD_FLAGS	=	-L $(LIB_FOLDER) -lmy

CC			=	gcc

CFLAGS	+=	-Wall -Wextra

CRIT_FLAGS	=	--coverage -lcriterion

NAME_TEST	=	unit_test

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIB_FOLDER)
	$(CC) -o $(NAME) $(OBJ) $(LD_FLAGS)

clean:
	rm -f $(OBJ)
	rm -f -r *~
	rm -f *gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

unit_test: $(OBJ) $(OBJ2)
	$(MAKE) -C $(LIB_FOLDER)
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) -L $(LIB_FOLDER) -lmy $(CPPFLAGS) $(CFLAGS) $(CRIT_FLAGS)

tests_run: unit_test
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr -b --exclude tests/

re: fclean all

.PHONY: all clean fclean unit_test tests_run re