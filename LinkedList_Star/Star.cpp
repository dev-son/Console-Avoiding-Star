#include "Star.h"

// 별을 만들어야 하는데 링크드리스트는 지금 정수만 받고있는데..
// 링크드리스트에 어떤걸 담아야 할까?
// 1. 별을 30개 만들어준다.
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
	printf("☆");
	printf("%d,%d", m_posX, m_posY);
}