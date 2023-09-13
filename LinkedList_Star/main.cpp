#include <stdio.h>
#include <conio.h>
#include <windows.h>

class LikedList;




class Player
{
private:
	int m_posX;
	int m_posY;
public:
	Player()
	{
		m_posX = 0;
		m_posY = 0;
	}

	void KeyInput();
	void Draw();
	void GotoXY(int _x, int _y)
	{
		COORD pos = { _x, _y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
};

void Player::KeyInput()
{
	char keyInput = 0;

	if (_kbhit())
	{
		keyInput = _getch();

		if (keyInput == 'w')
		{
			m_posY--;
		}
		if (keyInput == 's')
		{
			m_posY++;
		}
		if (keyInput == 'a')
		{
			m_posX--;
		}
		if (keyInput == 'd')
		{
			m_posX++;
		}
	}
}

void Player::Draw()
{
	GotoXY(m_posX, m_posY);
	printf("▲");
	printf("%d,%d", m_posX, m_posY);
}




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

	for (int i = 0; i < 3; i++)
	{
		list->Push_back(new Star());
	}

	delete list;

	return 0;


	//   list->Push_front(10);
	//   list->Push_front(20);

	//Print_ListState(list);
	//Node* nodeResult = list->Search(20);
	//printf("node %p", nodeResult);

	//list->Insert(nodeResult, 1000);
	//Print_ListState(list);

	//list->Pop_back();
	//Print_ListState(list);

	//list->Push_back(50);
	//Print_ListState(list);
	Player* player = new Player();
	//while (true)
	//{
	//   star->SetPosition();
	//   system("cls");



	//   // 그려줌
	//   star->Render();

	//   // 별 내려옴
	//   star->Drop();

	//   // 플레이어 키 입력
	//   player->KeyInput();

	//   // 플레이어 그려줌
	//   player->Draw();

	//   // 별의 위치가 30보다 크다면 원위치
	//   star->SetPosition();
	//}
	return 0;
}