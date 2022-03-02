NAME=AnimalFarm
FLAGS=-Wall -Wextra -Werror
SRCS=Dog.cpp Cat.cpp Animal.cpp  WrongCat.cpp WrongAnimal.cpp Brain.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re