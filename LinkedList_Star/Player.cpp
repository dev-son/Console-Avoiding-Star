#include "Console.h"
#include <stdio.h>
#include "Player.h"

void Player::Draw()
{
	int a = 10;
	//4byte 공간을 만들고 이름을 a 이곳에 10 넣음
	
	//consoleInstance->GotoXY(  )
	GotoXY(m_posX, m_posY);
	//Console::SGotoXY(m_posX, m_posY);

	printf("▲");
	printf("%d,%d", m_posX, m_posY);
}
