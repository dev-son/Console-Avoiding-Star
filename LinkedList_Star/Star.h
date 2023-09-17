#pragma once
#include "LinkedList.h"

// 별 하나의 클래스  -- stars 생각하면 안됨
class Star
{
private:
	int m_posX;
	int m_posY;
public:
	Star()
	{
		m_posX = 0;
		m_posY = 0;
	}

	// 별 생성
	void Createtor();

	// 별이 떨어진다.
	void Drop();

	// 별을 출력한다.
	void Render();

	void SetPosition()
	{
		if (m_posY >= 30)
		{
			m_posX = 0;
			m_posY = 0;
		}
	}
};