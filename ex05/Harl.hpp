
#ifndef HARL_HPP
#define HARL_HPP

#define DEBUG 1
#define INFO 2
#define WARNING 3
#define ERROR 4

#include <iostream>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain( std::string level );
};

#endif
