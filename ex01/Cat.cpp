#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat cloned" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	std::cout << "Cat cloned" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "* Cat meows *" << std::endl;
}