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
	// �� ������ ��� �������� �����ü� �־�� �ҰŰ�����
	while (_front->pNext != nullptr)
	{
		// ��� ���� ���ԵǴµ� ������ �ϳ� �������� ����
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
	// ���� ������ �޴´�.
	Node* node = _node;

	// ���ο� ��� ����
	Node* newNode = new Node(_data);

	if (node->pPrev == nullptr)
	{
		node->pPrev = newNode;
		m_front = newNode;
		//newNode->pNext = node; // ����ȴ�.
	}
	else
	{
		// ���ο� ��忡 ���� ��� prev �� �־���
		newNode->pPrev = node->pPrev;

		// ���� ����� �տ��ִ� ����� next �� ���ο� ��带 ����
		node->pPrev->pNext = newNode;

		// ���ο� ��尡 node �� ����Ű����
		//newNode->pNext = node; // ����
	}
	newNode->pNext = node;
}


// ��� �����Դϴ�. : �����غ���. 
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
//   // �տ� ���
//
//   if (_node->pPrev == nullptr)
//   {
//      m_front = _node->pNext;
//   }
//   else
//   {
//      // _node �� ����� prev �ϰ� next �� ���� �������ش�.
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