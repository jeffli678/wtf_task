#include "XorStr.hpp"
#include "maze.h"
#include <cstdlib>

namespace maze
{
	std::string maze;
	
	void init_maze()
	{
		//130312201202132313131220031003131133031312200303113312120222120312231331
		maze = XorStr("adwdasswaswsadsdadadasswwdawwdadaaddwdadasswwdwdaaddasaswsssaswdassdadda");
		std::cout << "Welcome to maze game!" << std::endl;
		std::cout << "Use W,A,S,D to move" << std::endl;
	}

	void process_maze()
	{
		char command;
		int step = 0;
		while(step != 72)
		{
			command = static_cast<char>(tolower(getchar()));
			switch(command)
			{
			case 'w':
			case 'a':
			case 's':
			case 'd':
				if (maze[step] != command)
				{
					std::cout << XorStr("Ohh! Try more harder!") << std::endl;
					return;
				}
				step++;
				std::cout << XorStr("OK. Lets go next!") << std::endl;
				break;
			case '\n':
				continue;
			default:
				std::cout << XorStr("Khm... enter valid command!") << std::endl;
				break;
			}
		}

		std::cout << XorStr("Ohh! Nice. But.. where is flag????") << std::endl;
	}
}
