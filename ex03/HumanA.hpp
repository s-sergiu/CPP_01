
#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		weapon;
		std::string name;
	public:
		void	attack();
		HumanA(std::string _name);
		~HumanA();
};

#endif
