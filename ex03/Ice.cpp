#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice created" << std::endl;
	return ;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout << "Ice cloned" << std::endl;
	return ;
}

Ice::~Ice()
{
	std::cout << "Ice destroyed" << std::endl;
	return ;
}

Ice &Ice::operator=(const Ice &obj)
{
	this->_type = obj._type;
	std::cout << "Ice cloned" << std::endl;
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
