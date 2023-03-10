#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	if (!_brain)
	{
		perror("Dog brain creation unsucessful");
		exit(1);
	}
}

Dog::Dog( const Dog &copy ) : Animal(copy) {
	*this = copy;
}

Dog::~Dog() {}

Dog &Dog::operator=( const Dog &assign ) {
	this->_type = assign._type;
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << this->getType() << ": woof woof" << std::endl;
}

void Dog::getIdeas( int i ) const {
	for (int i = 0; i < 100; i++) {
		std::string idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << "[" << i << "]" << " " << idea << std::endl;
	}
}

void Dog::setIdea( int i, std::string idea ) {
	this->_brain->setIdea(i, idea);
}
