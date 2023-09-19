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

	for (int i = 0; i < 3; i++)
	{
		list->Push_back(new Star());
	}

	Node* nowNode;
	nowNode = list->GetFront();	// ���� ��带 ��ȯ
	nowNode->m_data->Render();	// ��ȯ�� ����� �����Ͱ� ��Ÿ �� ��Ÿ�� �׷��ش�.
	delete list;

	return 0;
}