NAME=MineCrampf
FLAGS=-Wall -Wextra -Werror
SRCS=AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  MateriaSource.cpp  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re