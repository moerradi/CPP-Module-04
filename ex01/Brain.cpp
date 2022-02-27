#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is dead" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100 ; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	std::cout << "Brain copied" << std::endl;
	return *this;
}

