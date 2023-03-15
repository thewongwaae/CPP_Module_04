#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	if (!_brain)
	{
		perror("Dog brain creation unsucessful");
		exit(1);
	}
	std::cout << "Dog construct" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy) {
	*this = copy;
	std::cout << "Dog copy" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog deconstruct" << std::endl;
}

Dog &Dog::operator=( const Dog &assign ) {
	this->_type = assign._type;
	std::cout << "Dog assign" << std::endl;
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << this->getType() << ": woof woof" << std::endl;
}

void Dog::getIdeas( void ) const {
	for (int i = 0; i < 100; i++) {
		std::string idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << "[" << i << "]" << " " << idea << std::endl;
	}
}

void Dog::setIdea( int i, std::string idea ) {
	this->_brain->setIdea(i, idea);
}
