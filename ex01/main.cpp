#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
		Animal a;
		Cat c;
		Dog d;

		std::cout << c.getType() << " " << std::endl;
		std::cout << d.getType() << " " << std::endl;
		a.makeSound();
		c.makeSound();
		d.makeSound();
}