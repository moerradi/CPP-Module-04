#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice &Ice::operator=(const Ice &obj)
{
	this->_type = obj._type;
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
