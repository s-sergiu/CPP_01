
#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<weapon->getType();
	std::cout<<std::endl;
}

HumanA::HumanA(std::string _name, Weapon &_weapon)
{
	name = _name;
	weapon = &_weapon;
}

HumanA::~HumanA()
{

}
