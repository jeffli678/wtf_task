#include "megacrypt.h"
#include "XorStr.hpp"
#include <iostream>
namespace cryptor
{
	const unsigned HASH = 4285202036;
	const unsigned char FLAG[] = { 0xfc, 0xab, 0x16, 0xa8, 0xbf, 0xf5, 0x9d, 0x2d, 0x21, 0x27, 0xc8, 0x8c, 0x0f, 0x89, 0x4c, 0x00, 0xb1, 0xac, 0x33, 0xb2, 0xd6, 0x73, 0xba, 0xd3, 0xc3, 0xdc, 0x9f, 0x40, 0xf2, };
	
	unsigned hash(unsigned num)
	{
		num ^= 0x8566;
		num = ~num;
		num = (num ^ (num ^ (num ^ 0x55)) ^ 0x811550);
		return  num;
	}
	void exec()
	{
		std::cout << XorStr("Please. Enter password for decrypt key") << std::endl;
		unsigned password = 0;
		std::cin >> password;
		srand(password);
		if(hash(password) != HASH)
		{
			std::cout << XorStr("Invalid password x(") << std::endl;
			return;
		}

		for (int i = 0; i < 29; i++)
		{
			printf_s(XorStr("%c"), FLAG[i] ^ ((rand() % 255 + 1)));
		}
		

	}
}