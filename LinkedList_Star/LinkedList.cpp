#include "LinkedList.h"

void LikedList::Push_back(Star* _star)
{
	Node* pNode = new Node(_star);

	if (m_back == nullptr)
	{
		m_front = pNode;
	}
	else
	{
		//m_back->pPrev = m_back;
		m_back->pNext = pNode;
		pNode->pPrev = m_back;
	}
	m_back = pNode;
}

void LikedList::Push_front(Star* _data)
{
	Node* pNode = new Node(_data);
	Node* temp = nullptr;
	if (m_front == nullptr)
	{
		m_front = pNode;
		m_back = pNode;
	}
	else
	{
		pNode->pNext = m_front;
		m_front->pPrev = pNode;
	}
	m_front = pNode;
}

void LikedList::Pop_back()
{
	if (IsEmpty())
	{
		return;
	}
	Node* _front = m_front;
	Node* temp = _front;
	// 맨 마지막 노드 전에꺼를 가져올수 있어야 할거같은데
	while (_front->pNext != nullptr)
	{
		// 계속 같이 대입되는데 마지막 하나 전에꺼가 들어옴
		temp = _front;
		_front = _front->pNext;
	}
	delete temp->pNext;
	temp->pNext = nullptr;
	m_back = temp;
}

void LikedList::Pop_front()
{
	if (IsEmpty())
	{
		return;
	}
	m_front = m_front->pNext;
}

bool LikedList::IsEmpty()
{
	if (m_front == nullptr)
	{
		return true;
	}
	return false;
}

Node* LikedList::GetFront()
{
	return m_front;
}

Node* LikedList::GetBack()
{
	return m_back;
}

Node* LikedList::Search(Star* _data)
{
	Node* searchNode = m_front;

	while (searchNode->m_data != _data)
	{
		searchNode = searchNode->pNext;
		if (searchNode == nullptr)
		{
			break;
		}
	}
	if (searchNode->m_data == _data)
	{
		return searchNode;
	}
	return nullptr;
}

void LikedList::Insert(Node* _node, Star* _data)
{
	// 지역 변수에 받는다.
	Node* node = _node;

	// 새로운 노드 생성
	Node* newNode = new Node(_data);

	if (node->pPrev == nullptr)
	{
		node->pPrev = newNode;
		m_front = newNode;
		//newNode->pNext = node; // 공통된다.
	}
	else
	{
		// 새로운 노드에 기존 노드 prev 를 넣어줌
		newNode->pPrev = node->pPrev;

		// 기존 노드의 앞에있는 노드의 next 에 새로운 노드를 연결
		node->pPrev->pNext = newNode;

		// 새로운 노드가 node 를 가리키도록
		//newNode->pNext = node; // 공통
	}
	newNode->pNext = node;
}


// 노드 삭제입니다. : 정리해본다. 
void LikedList::Delete(Node* _node)
{
	Node* node = _node;
	Node* prevNode = node->pPrev;
	Node* nextNode = node->pNext;

	if (prevNode == nullptr)  // PopFront
	{
		m_front = nextNode;
		//nextNode->pPrev = _node->pPrev;
		nextNode->pPrev = nullptr;
	}
	else
	{
		prevNode->pNext = _node->pNext;

		if (nextNode == nullptr)  // PopBack
		{
			m_back = _node->pPrev;
		}
		else
		{
			nextNode->pPrev = _node->pPrev;
		}
	}
	delete _node;
}




//
//   // 앞에 노드
//
//   if (_node->pPrev == nullptr)
//   {
//      m_front = _node->pNext;
//   }
//   else
//   {
//      // _node 만 지우고 prev 하고 next 를 서로 연결해준다.
//      nextNode->pPrev = _node->pPrev;
//      prevNode->pNext = _node->pNext;
//   }
//}

Node* LikedList::At(int _index)
{
	return m_back;
}

void LikedList::Count()
{

}