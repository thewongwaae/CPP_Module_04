#include "Animal.hpp"

AAnimal::AAnimal( void ) : _type("dunno") {}

AAnimal::AAnimal( const AAnimal &copy ) {
	*this = copy;
}

AAnimal::~AAnimal( void ) {}

AAnimal &AAnimal::operator=( const AAnimal &assign ) {
	this->_type = assign._type;
	return (*this);
}

// void AAnimal::makeSound( void ) const {
// 	std::cout << "I dunno what sound this AAnimal makes" << std::endl;
// }

std::string AAnimal::getType( void ) const {
	return (this->_type);
}
