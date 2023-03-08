#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
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
