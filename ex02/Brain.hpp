#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &rhs);
		~Brain();
		void	insertIdea(std::string idea, int index);
	private:
		std::string	_ideas[100];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
};

#endif //__BRAIN_HPP__