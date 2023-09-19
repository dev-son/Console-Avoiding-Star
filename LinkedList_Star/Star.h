#pragma once
#include "LinkedList.h"

// �� �ϳ��� Ŭ����  -- stars �����ϸ� �ȵ�
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

	// �� ����
	void Createtor();

	// ���� ��������.
	void Drop();

	// ���� ����Ѵ�.
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