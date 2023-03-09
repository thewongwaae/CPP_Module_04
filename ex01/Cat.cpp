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
	this->_type = assign._type;
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << this->getType() << ": meeoowww" << std::endl;
}
