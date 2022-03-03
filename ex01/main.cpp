#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// deep copy test
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
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
		animals[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    };
}