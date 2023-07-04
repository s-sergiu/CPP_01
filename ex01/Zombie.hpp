
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	Name;
		int			Id;
	public:
		void	announce ( void );
		void	setName(std::string name, int id);
		Zombie ();
		~Zombie ();
};

Zombie* zombieHorde( int N, std::string name );

#endif
