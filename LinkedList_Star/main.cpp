#include <stdio.h>
#include "LinkedList.h"
#include "Star.h"
#include "Console.h"

void PrintNode(LikedList* _list)
{
	Node* _linkedList = _list->GetFront();
	while (_linkedList != nullptr)
	{
		printf("Liked List : %p\n", _linkedList->m_data);
		_linkedList = _linkedList->pNext;
	}
	printf("---------------------\n");
}

void Print_ListState(LikedList* _list)
{
	Node* node = _list->GetFront();
	Node* listBack = _list->GetBack();

	printf("---------------------\n");
	printf(" list : %p \n", _list);
	printf(" front : %p \n", _list->GetFront());
	printf(" back : %p \n", _list->GetBack());
	printf("---------------------\n");

	while (node != nullptr)
	{
		printf("node   : %p\n", node);

		printf("Prev   : %p\t", node->pPrev);
		printf("��   : %p\t", node->m_data);
		printf("Next   : %p\n", node->pNext);
		node = node->pNext;
		printf("---------------------\n");

	}
	printf("-------------------------------------------------------------------------------\n");
}
int main()
{
	LikedList* list = new LikedList();

	while (true)
	{
		// 1. ���� �����.
		//       ���� �����, ���� ���� list �� push back �� ��´�. 
		list->Push_back(new Star());

		// 2. ������ ������Ʈ �Ѵ�.
		//		���� y ������ �ϳ� ��������.
		Node* nowNode = list->GetFront();
		while (nowNode != nullptr)
		{
			Star* nowStar = nowNode->m_data;
			nowStar->Drop();
			nowNode = nowNode->pNext;
		}

		// 3. ������ ����Ѵ�
		Node* renderNode = list->GetFront();
		while (renderNode != nullptr)
		{
			Star* drawStar = renderNode->m_data;
			drawStar->Render();
			renderNode = renderNode->pNext;
		}
		// 4. ������ �ǹؿ� ������ �����ش�.
		Node* clearNode = list->GetFront();
		while (clearNode != nullptr)
		{	
			// star �� y ���� 21���� ũ�� ���ش�. - ���ش��� �ǹ̴� ? list ���� ����
			Star* star = clearNode->m_data;
			// y �� ���� 21���� ū�� üũ
			if (star->)
			{
				// star �� ����Ʈ�Ѵ�. 
				 delete star;
				// ũ�� list ���� ���� delete
				list->Delete(clearNode);
			}
			
			// 21���� 
			// 
			// ���� ������ �������. 
		}
	}
	delete list;

	return 0;
}