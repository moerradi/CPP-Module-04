#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat cloned" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	Animal::operator=(rhs);
	std::cout << "Cat cloned" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "* Cat meows *" << std::endl;
}