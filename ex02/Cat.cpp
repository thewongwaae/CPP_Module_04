#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	_type = "Cat";
	_brain = new Brain();
	if (!_brain)
	{
		perror("Cat brain creation unsucessful");
		exit(1);
	}
}

Cat::Cat( const Cat &copy ) : Animal(copy) {
	*this = copy;
}

Cat::~Cat() {}

Cat &Cat::operator=( const Cat &assign ) {
	if (this != &assign) {
		this->_type = assign._type;
		this->_brain = new Brain();
		if (!this->_brain) {
			perror("Cat Brain allocation failed");
			exit(1);
		}
		*this->_brain = *assign._brain;
	}
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << this->getType() << ": meeoowww" << std::endl;
}

void Cat::getIdeas( void ) const {
	for (int i = 0; i < 100; i++) {
		std::string idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << "[" << i << "]" << " " << idea << std::endl;
	}
}

void Cat::setIdea( int i, std::string idea ) {
	this->_brain->setIdea(i, idea);
}
