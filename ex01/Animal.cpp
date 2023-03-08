#include "Animal.hpp"

Animal::Animal( void ) : _type("dunno") {}

Animal::Animal( const Animal &copy ) {
	*this = copy;
}

Animal::~Animal( void ) {}

Animal &Animal::operator=( const Animal &assign ) {
	this->_type = assign._type;
	return (*this);
}

void Animal::makeSound( void ) const {
	std::cout << "I dunno what sound this animal makes" << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->_type);
}
