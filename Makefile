NAME=pipex

.a = pipex.a

PIPE = ./pipex.c ./more.c ./begin_end.c

FLAGS = -Werror -Wextra -Wall

SRC = libf.a
.o=$(PIPE:.c=.o)

$(NAME) : ./libft/ $(PIPE) $(.o)
	make -C ./libft/
	gcc $(FLAGS) $(PIPE) ./libft/libft.a -o $(NAME)
	ar -rc $(.a) $(.o) 
	ranlib $(.a)

all:$(NAME)

clean:
	rm -f $(.o)
	make -C ./libft/ fclean
	@echo "BORRADO"

fclean: clean
	rm -f $(NAME)
	rm -f $(.a)
	@echo "BORRADO TODO"

re: fclean all

.PHONY: all clean re fclean




