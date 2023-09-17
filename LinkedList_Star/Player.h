#pragma once

class Player
{
private:
	int m_posX;
	int m_posY;
public:
	Player()
	{
		m_posX = 0;
		m_posY = 0;
	}
	void Draw();
};
