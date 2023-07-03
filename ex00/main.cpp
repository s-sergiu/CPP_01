
#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie;

	randomChump("StackZombie");
	zombie = newZombie("HeapZombie");

	return (0);
}
