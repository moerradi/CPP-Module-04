#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

Character::Character(Character const &src) {
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] != NULL)
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return ;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	return ;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "Equipped " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "No more place in inventory" << std::endl;
	return ;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (_inventory[idx] == NULL)
	{
		std::cout << "Nothing to unequip" << std::endl;
		return ;
	}
	_inventory[idx] = NULL;
	std::cout << "Unequipped" << std::endl;
	return ;
}

std::string const &Character::getName() const {
	return _name;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (_inventory[idx] == NULL)
	{
		std::cout << "Nothing to use" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
	return ;
}