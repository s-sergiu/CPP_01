
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
		void	announce ( void );
	public:
		Zombie (std::string _name);
		~Zombie ();
};

void randomChump( std::string z1Name );
Zombie* newZombie( std::string name );

#endif
