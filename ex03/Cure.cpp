#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " *" << std::endl;
	return ;
}