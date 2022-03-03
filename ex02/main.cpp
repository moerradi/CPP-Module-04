#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal test;
	Cat c;
	Dog d;
	c.makeSound();
	d.makeSound();
	std::cout << c.getType() << " " << std::endl;
	std::cout << d.getType() << " " << std::endl;
}