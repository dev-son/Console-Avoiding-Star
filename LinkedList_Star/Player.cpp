#include "Console.h"
#include <stdio.h>
#include "Player.h"

void Player::Draw()
{
	int a = 10;
	//4byte ������ ����� �̸��� a �̰��� 10 ����
	
	//consoleInstance->GotoXY(  )
	GotoXY(m_posX, m_posY);
	//Console::SGotoXY(m_posX, m_posY);

	printf("��");
	printf("%d,%d", m_posX, m_posY);
}
