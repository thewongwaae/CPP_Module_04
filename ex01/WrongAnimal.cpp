#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("wrong_dunno") {}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	*this = copy;
}

WrongAnimal::~WrongAnimal( void ) {}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &assign ) {
	this->_type = assign._type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "I dunno what sound this Wronganimal makes" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->_type);
}
