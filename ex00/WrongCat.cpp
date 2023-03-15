#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	_type = "WrongCat";
	std::cout << "WrongCat construct" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy) {
	*this = copy;
	std::cout << "WrongCat copy" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstruct" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &assign ) {
	this->_type = assign._type;
	std::cout << "Wrong assign" << std::endl;
	return *this;
}

void WrongCat::makeSound( void ) const {
	std::cout << this->getType() << ": (wrong) meow??" << std::endl;
}
