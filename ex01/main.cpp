
#include <stdio.h>
#include "Zombie.hpp"

int main (void)
{
	Zombie *horde1;
	Zombie *horde2;

	horde1 = zombieHorde(10, "horde1");
	horde2 = zombieHorde(10, "horde2");
	for (int i = 0; i < 10; i++)
	{
		std::cout<<"Zombie "<<i<<" ";
		horde1[i].announce();
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout<<"Zombie "<<i<<" ";
		horde2[i].announce();
	}
	delete [] horde1;
	delete [] horde2;
	system("leaks Zombie");
	return (0);
}
