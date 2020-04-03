#include "secret_flag.h"
#include "XorStr.hpp"
#include "real_secret.h"
#include <string>
#include <iostream>

void secret_flag()
{
	std::cout << XorStr("WOW! You found secret section!") << std::endl;
	_asm
	{
		push eax
		mov eax, real_secret
		xor eax, 1358h
		push ebx
		xor eax, ebx
		xor ebx, eax
		xor eax, eax
		pop ebx
		pop eax
		jmp junk1
	}
#pragma region junk
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
	JUNK_CODE
#pragma endregion
		std::string flag = XorStr("sbh{Nis3_jmp_guy}");
#pragma region junk
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
		JUNK_CODE
#pragma endregion
	_asm
	{
		junk1:
	}
	std::cout << XorStr("OR NO?") << std::endl;
}