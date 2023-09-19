#pragma once
#include <stdio.h>
#include <windows.h>

class Console
{
private:
	int m_posY;
	int m_posX;
public:
	// ��� �Լ� - ��ü �־�� ������ ����
	void GotoXY(int _x, int _y);

	// �����Լ� - ��ü�� ��� �Ϲ��Լ�ó�� ������ ����
	static void SGotoXY(int _x, int _y);

	void SetTitle(const char* _szConsoleName);
};


// �Ϲ��Լ�
void GotoXY(int _x, int _y);

