#include "Brain.hpp"

Brain::Brain( void ) {}

Brain::Brain( const Brain &copy ) {
	*this = copy;
}

Brain::~Brain() {}

Brain &Brain::operator=( const Brain &assign ) {
	for (int i = 0; i < 100; i++) {
		if (assign._ideas[i].length() > 0)
			this->_ideas[i].assign(assign._ideas[i]);
	}
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
