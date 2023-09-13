#pragma once

// �� �ϳ��� Ŭ����  -- stars �����ϸ� �ȵ�
class Star
{
private:
	int m_posX;
	int m_posY;
	LikedList* list;
public:
	Star()
	{
		m_posX = 0;
		m_posY = 0;
		list = nullptr;
	}

	// �� ����
	void Createtor(LikedList* list);

	// ���� ��������.
	void Drop();

	// ���� ����Ѵ�.
	void Render();

	void GotoXY(int _x, int _y)
	{
		COORD pos = { _x, _y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void SetPosition()
	{
		if (m_posY >= 30)
		{
			m_posX = 0;
			m_posY = 0;
		}
	}
};