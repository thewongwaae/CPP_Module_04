#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain construct" << std::endl;
}

Brain::Brain( const Brain &copy ) {
	*this = copy;
	std::cout << "Brain copy" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain deconstruct" << std::endl;
}

Brain &Brain::operator=( const Brain &assign ) {
	if (this == &assign)
		return *this;
	for (int i = 0; i < 100; i++) {
		if (assign._ideas[i].length() > 0)
			this->_ideas[i].assign(assign._ideas[i]);
	}
	std::cout << "Brain assign" << std::endl;
	return *this;
}

std::string Brain::getIdea( int i ) const {
	if (i < 100)
		return (_ideas[i]);
	return ("Brain only has 100 ideas");
}

void Brain::setIdea( int i, std::string idea ) {
	if (i < 100)
		_ideas[i] = idea;
	else
		std::cout << "Brain only has 100 ideas" << std::endl;
}
