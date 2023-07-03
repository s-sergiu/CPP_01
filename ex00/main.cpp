
#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie;

	randomChump("StackZombie");
	zombie = newZombie("HeapZombie");

	delte(zombie);
	return (0);
}
