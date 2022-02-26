#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);

		~Cat();
		
		void makeSound(void);
	private:
		Brain *_brain;
};

#endif