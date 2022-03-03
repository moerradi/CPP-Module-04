#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog cloned" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	Animal::operator=(rhs);
	std::cout << "Dog cloned" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "* Dog barks *" << std::endl;
}