#include "maze.h"
#include "megacrypt.h"
#include "secret_flag.h"
#include "XorStr.hpp"

int main()
{
	__asm
	{
		jmp hidden
	}
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	__asm
	{
		cmp eax, 1337h
		jz label
		label:
		push secret_flag
	}
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	__asm
	{
		hidden:
		nop
	}
	std::cout << XorStr("Welcome to super games xD") << std::endl;
	std::cout << XorStr("Select game (0 - maze / 1 - megadecrypt)") << std::endl;
	std::string s;
	std::getline(std::cin, s);
	if(s == "1")
	{
		_asm jmp _cryptor
		JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			_asm _cryptor:
		cryptor::exec();
		_asm jmp _cryprot_end
		JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			JUNK_CODE
			_asm _cryprot_end:
		_asm nop
		goto ___end;
	}
	if(s == "0")
	{
		_asm jmp _maze
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		_asm _maze:
		maze::init_maze();
		maze::process_maze();
		_asm jmp maze_end
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		_asm maze_end:
		_asm nop
		goto ___end;
	}
	else
	{
		std::cout << XorStr("Please, use 0 or 1!") << std::endl;
	}
	___end:
	system(XorStr("pause"));
	return 0;
}