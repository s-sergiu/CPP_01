
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout<<"DEBUG"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"INFO"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"WARNING"<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"ERROR"<<std::endl;

}

void	Harl::complain(std::string level)
{
	void(Harl::*debugPtr)(void) = &Harl::debug;
	void(Harl::*infoPtr)(void) = &Harl::info;
	void(Harl::*warningPtr)(void) = &Harl::warning;
	void(Harl::*errorPtr)(void) = &Harl::error;
	Harl obj;
	(void)level;
	if (level == levels[0])
	(obj.*debugPtr)();
	(obj.*infoPtr)();
	(obj.*warningPtr)();
	(obj.*errorPtr)();
}
