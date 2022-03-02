#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia created" << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Materia created" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	std::cout << "Materia cloned (constructor)" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	std::cout << "Materia cloned (assingment)" << std::endl;
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