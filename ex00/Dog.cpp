#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
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
