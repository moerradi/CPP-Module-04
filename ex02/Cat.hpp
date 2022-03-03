#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);

		virtual ~Cat();
		
		void makeSound(void) const;
	private:
		Brain *_brain;
};
 
#endif