
#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		weapon;
		std::string name;
	public:
		void	attack();
		void	setWeapon(std::string _type);
		HumanA(std::string _name);
		~HumanA();
};

#endif
