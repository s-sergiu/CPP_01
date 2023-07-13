
#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack()
{
	std::cout<<name<<" attacks with their "<<weapon->getType();
	std::cout<<std::endl;
}

HumanB::HumanB(std::string _name)
{
	name = _name;
}

HumanB::~HumanB()
{

}
