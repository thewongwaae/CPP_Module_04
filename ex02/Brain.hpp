#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string _ideas[100];

	public:
		Brain( void );
		Brain( const Brain &copy );
		~Brain( void );
		Brain &operator=( const Brain &assign );

		std::string	getIdea( int i ) const;
		std::string *getIdeaAddr( int i );
		void		setIdea( int i, std::string idea );
};

#endif