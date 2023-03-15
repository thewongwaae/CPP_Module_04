#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	_type = "Cat";
	std::cout << "Cat construct" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy) {
	*this = copy;
	std::cout << "Cat copy" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat deconstruct" << std::endl;
}

Cat &Cat::operator=( const Cat &assign ) {
	this->_type = assign._type;
	std::cout << "Cat assign" << std::endl;
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << this->getType() << ": meeoowww" << std::endl;
}
