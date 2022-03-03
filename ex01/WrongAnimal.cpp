#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal cloned" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return *this;
	std::cout << "WrongAnimal cloned" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	this->type = type;
	std::cout << "WrongAnimal created" << std::endl;
}

std::string	WrongAnimal::getType()
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* Generic wrong animal noise *" << std::endl;
}