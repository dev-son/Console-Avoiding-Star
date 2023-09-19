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
		printf("값   : %p\t", node->m_data);
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
		// 1. 별을 만든다.
		//       별을 만든다, 만든 별을 list 에 push back 에 담는다. 
		list->Push_back(new Star());

		// 2. 별들을 업데이트 한다.
		//		별의 y 축으로 하나 더해진다.
		Node* nowNode = list->GetFront();
		while (nowNode != nullptr)
		{
			Star* nowStar = nowNode->m_data;
			nowStar->Drop();
			nowNode = nowNode->pNext;
		}

		// 3. 별들을 출력한다
		Node* renderNode = list->GetFront();
		while (renderNode != nullptr)
		{
			Star* drawStar = renderNode->m_data;
			drawStar->Render();
			renderNode = renderNode->pNext;
		}
		// 4. 별들의 맨밑에 왔을때 없애준다.
		Node* clearNode = list->GetFront();
		while (clearNode != nullptr)
		{	
			// star 의 y 값이 21보다 크면 없앤다. - 없앤다의 의미는 ? list 에서 빼고
			Star* star = clearNode->m_data;
			// y 의 값이 21보다 큰지 체크
			if (star->)
			{
				// star 을 딜리트한다. 
				 delete star;
				// 크면 list 에서 빼고 delete
				list->Delete(clearNode);
			}
			
			// 21보다 
			// 
			// 별을 위에서 만들었다. 
		}
	}
	delete list;

	return 0;
}