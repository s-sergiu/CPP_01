
#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie;

	randomChump("StackZombie");
	zombie = newZombie("HeapZombie");

	delete(zombie);
	return (0);
}
