#ifndef __DOG_HPP__
#define __DOG_HPP__
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &rhs);

		~Dog();

		void makeSound() const;	
};

#endif