#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure created" << std::endl;
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "Cure cloned" << std::endl;
	return ;
}

Cure::~Cure()
{
	std::cout << "Cure destroyed" << std::endl;
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	std::cout << "Cure cloned" << std::endl;
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