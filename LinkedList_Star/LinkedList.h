#pragma once

//#include "Star.h"  // Star data ; �� ���� �̰��� �ʿ�
//     vs
class Star ;    // ���� ���� : �̷��� �ִٶ�� �˷��ְ� ����Ҷ� include ���ؼ� ��Ȯ�ϰ� �˶�~~

struct Node
{
	Node* pPrev;
	//Star  data ;  // ���鶧 Node �� ũ�⸸ŭ ������ �Ҵ� - ũ�⸦ �˾ƾ� Node�� ����� ����.
	Star* m_data; // ���鶧 ������ �̱� ������ �׳� 8byte �� �Ҵ��ϰ� �ϴ� ���� 
	Node* pNext;

	Node(Star* _data)
	{
		m_data = _data;
		pNext = nullptr;
		pPrev = nullptr;
	}
};

/*

struct Node
{
	Node* pPrev;  //4 byte ������ ����� �̸��� pPrev��� �� // �ּҳ�������
	Star  data ;  // ������ ������� �ϴ� Star�� ũ�⸦ �˾ƾ� �� - ��� ��? Star.h�� ���.. 12byte 
	Star* m_data; //4����ũ ���� ���� - �ּҶ� Star�� ��ü ũ�⸦ ���� ��. �׷��� Star.h�� �� ��� ����� ����..
	Node* pNext;
};
	
	���� ũ�⸦ ����
	
 */

class LikedList
{
private:
	Node* m_front;      // ����
	Node* m_back;      // ��
	int m_capacity;   // �����
public:
	LikedList()
	{
		m_front = nullptr;
		m_back = nullptr;
		m_capacity = 0;
	}
	~LikedList()
	{
		/// �ٽ� ����
		// ���� ������ �ִ� ��� ������ �ı��Ѵ�.
		Node* nowNode = m_front;
		Node* nextNode = nowNode->pNext;
		Node* prevNode = nowNode->pPrev;

		while (nowNode != nullptr)
		{
			nextNode = nowNode->pNext;
			// nowNode �� �����
			delete nowNode;
			// ���� node�� �����Ѵ�..
			nowNode = nextNode;
		}
		//						i++ : ����
		//for (i = -10; i != 0; i++)
	/*	for (nowNode = m_front; nowNode != nullptr; nowNode = nextNode)
		{
			nextNode = nowNode->pNext;
			delete nowNode;
		}
			*/											/// nowNode�� �����µ� �������� pNext�� �����߱� ������ ������ �����. �޸������Ŀ� pNext�� ���� �ȵ�.
			/*for (nowNode = m_front; nowNode != nullptr; nowNode = nowNode->pNext)
			{

				delete nowNode;
			}*/

			//nowNode = m_front (:1000);
			//nowNode != nullptr;
			//delete nowNode (:1000);
			//nowNode = nowNode->pNext (:1000->pNext )   <=== ���� �� ? 
			//nowNode != nullptr;
			//delete nowNode;
			//nowNode = nowNode->pNext
			//nowNode != nullptr;
			//delete nowNode;
			//nowNode = nowNode->pNext

			/// �ڵ尡 �����ϱ� �����.
			//while (nextNode != nullptr)
			//{
			//	// [now]��带 [prev]�� ����
			//	prevNode = nowNode;

			//	// [now]�� [next]��带 �ּҸ� ����
			//	nowNode = nextNode;

			//	// [now]����� �ּҿ��� prev �� �����Ѵ�.
			//	delete prevNode;

			//	// next ��带 �ٽ� �ʱ�ȭ����
			//	nextNode = nowNode->pNext;
			//}


			/// ���� ����.
			// ���� ������ �ִ� ��� ������ �ı��Ѵ�. 
		 /*   Node* nowNode = m_front;
			Node* nextNode = nullptr;
			Node* previousNode = nullptr;
			while (nowNode->pNext != nullptr)
			{
			   nextNode = nowNode->pNext;
			   previousNode = nowNode->pPrev;
			   nowNode = nextNode;
			   delete previousNode;
			}
			delete nowNode->pPrev;
			delete nowNode;*/


			/// ���� �ڵ� 
			/*
			   // ���� ������ �ִ� ��� ������ �ı��Ѵ�.
			   Node* nowNode = m_front;

			   // ���� ��� = �Ǿ� ����� ���� ���
			   while (m_front->pNext != nullptr)
			   {
				  Node* nextNode = m_front->pNext;
				  Node* frontNode = m_front->pPrev;
				  m_front = nextNode;
				  delete frontNode;
			   }
			   */
	}
	// �ڿ� �Է�
	void Push_back(Star* _star);
	// �տ� �Է�
	void Push_front(Star* _star);
	// ���� �ڿ���
	void Pop_back();
	// ���� �ڿ���
	void Pop_front();
	// ������� üũ
	bool IsEmpty();
	// ���� front
	Node* GetFront();
	// ���� back
	Node* GetBack();
	// Search ã�� ���� ������ �ִ� �ּҸ� ��ȯ�Ѵ�.
	Node* Search(Star* _list);
	// ��� �ε����� , ���� ������
	void Insert(Node* _node, Star* _star);
	// ���° ��� �����Ұ���
	void Delete(Node* _node);
	// ���ڸ� �Է��ϸ� �ش�  ����� ���� �˷��ش�. 
	Node* At(int _index);

	// capacity �� ����
	void Count();
};
