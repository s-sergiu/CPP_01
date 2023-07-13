
#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		Weapon		*weapon;
		std::string name;
	public:
		void	attack();
		void	setWeapon(Weapon &_weapon);
		HumanB(std::string _name);
		~HumanB();
};

#endif
