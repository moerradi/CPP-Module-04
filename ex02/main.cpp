#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
	{
		animals[i] =  new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		animals[i] =  new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 5; i++)
	{
    	Dog* d = static_cast<Dog*>(animals[i]);
		delete d;
	}
	for (int i = 5; i < 10; i++)
	{
    	Cat* c = static_cast<Cat*>(animals[i]);
		delete c;
	}
}