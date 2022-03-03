#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog cloned" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	std::cout << "Dog cloned" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "* Dog barks *" << std::endl;
}