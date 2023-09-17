#pragma once
#include <stdio.h>
#include <windows.h>

class Console
{
private:
	int m_posY;
	int m_posX;
public:
	// 멤버 함수 - 객체 있어야 접근이 가능
	void GotoXY(int _x, int _y);

	// 정적함수 - 객체가 없어도 일반함수처럼 접근이 가능
	static void SGotoXY(int _x, int _y);

	void SetTitle(const char* _szConsoleName);
};


// 일반함수
void GotoXY(int _x, int _y);

