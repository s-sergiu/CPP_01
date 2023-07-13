
#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		Weapon		*weapon;
		std::string name;
	public:
		void	attack();
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
};

#endif
