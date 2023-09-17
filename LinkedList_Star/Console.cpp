#include "Console.h"

void Console::GotoXY(int _x, int _y)
{
	COORD pos = {_x, _y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Console::SGotoXY(int _x, int _y)
{
	COORD pos = { _x, _y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Console::SetTitle(const char* _szConsoleName)
{
	/// 이상하게 에러가 생김
	//SetConsoleTitle(_szConsoleName);
}

void GotoXY(int _x, int _y)
{
	COORD pos = { _x, _y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
