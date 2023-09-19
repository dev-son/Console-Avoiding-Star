#include "Console.h"
#include "Star.h"

// 별을 만들어야 하는데 링크드리스트는 지금 정수만 받고있는데..
// 링크드리스트에 어떤걸 담아야 할까?
// 1. 별을 30개 만들어준다.
void Star::Createtor()
{

}

void Star::Drop()
{
	m_posY++;
}

void Star::Render()
{
	printf("☆");
	printf("%d,%d", m_posX, m_posY);
}
// 왜? 어디에 쓸건지 이유를 명확하게 생각할 것