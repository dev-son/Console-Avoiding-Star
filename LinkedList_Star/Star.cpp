#include "Star.h"

// ���� ������ �ϴµ� ��ũ�帮��Ʈ�� ���� ������ �ް��ִµ�..
// ��ũ�帮��Ʈ�� ��� ��ƾ� �ұ�?
// 1. ���� 30�� ������ش�.
void Star::Createtor(LikedList* _list)
{

	//_list->GetFront()->m_data->
}

void Star::Drop()
{
	for (int i = 0; i < 30; i++)
	{
		m_posY++;
	}
}

void Star::Render()
{
	GotoXY(m_posX, m_posY);
	printf("��");
	printf("%d,%d", m_posX, m_posY);
}