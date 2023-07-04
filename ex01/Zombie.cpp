
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout<<"Zombie created."<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<"Zombie "<<Id<<" died."<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<Name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string name, int id)
{
	Name = name;
	Id = id;
}
