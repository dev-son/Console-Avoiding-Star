#include "Console.h"
#include "Star.h"

// ���� ������ �ϴµ� ��ũ�帮��Ʈ�� ���� ������ �ް��ִµ�..
// ��ũ�帮��Ʈ�� ��� ��ƾ� �ұ�?
// 1. ���� 30�� ������ش�.
void Star::Createtor()
{

}

void Star::Drop()
{
	m_posY++;
}

void Star::Render()
{
	printf("��");
	printf("%d,%d", m_posX, m_posY);
}
// ��? ��� ������ ������ ��Ȯ�ϰ� ������ ��