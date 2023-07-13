
#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>

class Weapon 
{
	private:
		std::string	type;
	public:
		const std::string	getType();	
		void				setType(std::string _type);	
		Weapon(std::string _type);
		~Weapon();

};

#endif
