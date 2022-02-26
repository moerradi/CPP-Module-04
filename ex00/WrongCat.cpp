#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat cloned" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	WrongAnimal::operator=(rhs);
	std::cout << "WrongCat cloned" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

