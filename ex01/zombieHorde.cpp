
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies[N];

	for (int i = 0; i < N; i++)
		zombies[i] = new Zombie(name);
	return (*zombies);
}
