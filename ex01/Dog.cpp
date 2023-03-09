#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	if (!_brain)
	{
		perror("Cat brain creation unsucessful");
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
