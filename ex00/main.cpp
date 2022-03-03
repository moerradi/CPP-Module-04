#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Normal test :" << std::endl;
	{
		Animal a;
		Animal *cptr;
		Cat c;
		Dog d;
		cptr = &c;
		std::cout << c.getType() << " " << std::endl;
		std::cout << d.getType() << " " << std::endl;
		a.makeSound();
		c.makeSound();
		d.makeSound();
		cptr->makeSound();
	}
	std::cout << "Wrong test :" << std::endl;
	{
		WrongAnimal wa;
		WrongCat wc;
		WrongAnimal *waptr;
		waptr = &wc;
		std::cout << wc.getType() << " " << std::endl;
		wa.makeSound();
		wc.makeSound();
		waptr->makeSound();
	}
}