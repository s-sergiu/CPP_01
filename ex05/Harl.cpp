
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<" *Sample debug message..."<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<" *Sample info message..."<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<" *Sample warning message..."<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<" *Sample error message..."<<std::endl;

}

void	Harl::complain(std::string level)
{
	typedef void(Harl::*functionpointer)();

	std::string levels[4];	
	functionpointer test[4];

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	test[0] = &Harl::debug;
	test[1] = &Harl::info;
	test[2] = &Harl::warning;
	test[3] = &Harl::error;

	Harl obj;

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(obj.*test[i])();
}
