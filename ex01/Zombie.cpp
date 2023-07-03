
#include "Zombie.hpp"

Zombie::Zombie (std::string _name)
{
	name = _name;
	announce();
}

Zombie::~Zombie()
{
	std::cout<<name<<" died."<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
