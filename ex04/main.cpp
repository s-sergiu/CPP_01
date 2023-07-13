#include <iostream>
#include <fstream>
#include <string>

void	sedIM(char **argv)
{
	std::string s1;
	std::string s2;
	std::string filename;
	std::string buffer;

	std::fstream file;
	std::fstream file2;

	std::size_t found;

	filename = argv[1];

	s1 = argv[2];
	s2 = argv[3];

	file.open(filename, std::fstream::in);
	if (file.is_open())
	{
		filename += ".replace";
		file2.open(filename, std::fstream::out);
		while(file.good())
		{
			getline(file, buffer);
			found = buffer.find(s1);
			if (found != std::string::npos)
			{
				buffer.erase(found, s1.length());
				buffer.insert(found, s2);
				file2<<buffer<<std::endl;
			}
			else
				file2<<buffer<<std::endl;
		}
	}
	else
		std::cout<<"Filename doesn't exist: "<<argv[1]<<std::endl;
}

int main(int argc, char **argv)
{

	(void)argc;
	if (argc != 4)
		std::cout<<"Usage: ./sedIM <filename> <string1> <string2>"<<std::endl;
	else 
		sedIM(argv);
	return(0);
}
