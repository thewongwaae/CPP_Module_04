#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	if (!_brain)
	{
		perror("Dog brain creation unsucessful");
		exit(1);
	}
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy) {
	*this = copy;
	std::cout << "Dog copy" << std::endl;
}

Dog::~Dog( void ) {
	delete(this->_brain);
	std::cout << "Dog deconstruct" << std::endl;
}

Dog &Dog::operator=( const Dog &assign ) {
	if (this != &assign) {
		this->_type = assign._type;
		this->_brain = new Brain(*assign._brain);
		if (!this->_brain) {
			perror("Cat Brain allocation failed");
			exit(1);
		}
	}
	std::cout << "Dog assign" << std::endl;
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << this->getType() << ": woof woof" << std::endl;
}

void Dog::getIdeas( void ) const {
	for (int i = 0; i < 100; i++) {
		const std::string& idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << "[" << i << "]" << " " << _brain->getIdeaAddr(i) << " " << idea << std::endl;
	}
}

void Dog::setIdea( int i, std::string idea ) {
	this->_brain->setIdea(i, idea);
}
