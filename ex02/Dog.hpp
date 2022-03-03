#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &rhs);

		~Dog();

		void makeSound() const;	
	private:
		Brain *_brain;
};

#endif