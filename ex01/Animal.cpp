#include "Animal.hpp"

Animal::Animal( void ) : _type("dunno") {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal( const Animal &copy ) {
	*this = copy;
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal deconstructor" << std::endl;
}

Animal &Animal::operator=( const Animal &assign ) {
	this->_type = assign._type;
	std::cout << "Animnal assign" << std::endl;
	return (*this);
}

void Animal::makeSound( void ) const {
	std::cout << "I dunno what sound this animal makes" << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->_type);
}
