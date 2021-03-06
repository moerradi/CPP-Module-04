#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string const &type)
{
	this->type = type;
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal cloned" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	std::cout << "Animal cloned" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "* Generic animal noise *" << std::endl;
}

std::string	Animal::getType()
{
	return this->type;
}
