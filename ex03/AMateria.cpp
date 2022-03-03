#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "*Did nothing to" << target.getName()  << " *" << std::endl;
	return ;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}