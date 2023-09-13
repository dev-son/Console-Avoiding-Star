#pragma once

#include "Star.h"

struct Node
{
	Node* pPrev;
	Star* m_data;
	Node* pNext;

	Node(Star* _data)
	{
		m_data = _data;
		pNext = nullptr;
		pPrev = nullptr;
	}
};

class LikedList
{
private:
	Node* m_front;      // 시작
	Node* m_back;      // 끝
	int m_capacity;   // 몇개인지
public:
	LikedList()
	{
		m_front = nullptr;
		m_back = nullptr;
		m_capacity = 0;
	}
	~LikedList()
	{
		/// 다시 새로
		// 내가 가지고 있는 모든 노드들을 파괴한다.
		Node* nowNode = m_front;
		Node* nextNode = nowNode->pNext;
		Node* prevNode = nowNode->pPrev;

		while (nowNode != nullptr)
		{
			nextNode = nowNode->pNext;
			// nowNode 를 지운다
			delete nowNode;
			// 다음 node로 변경한다..
			nowNode = nextNode;
		}
		//						i++ : 다음
		//for (i = -10; i != 0; i++)
	/*	for (nowNode = m_front; nowNode != nullptr; nowNode = nextNode)
		{
			nextNode = nowNode->pNext;
			delete nowNode;
		}
			*/											/// nowNode를 지웠는데 지운노드의 pNext로 접근했기 때문에 오류가 생긴다. 메모리해제후에 pNext로 접근 안됨.
			/*for (nowNode = m_front; nowNode != nullptr; nowNode = nowNode->pNext)
			{

				delete nowNode;
			}*/

			//nowNode = m_front (:1000);
			//nowNode != nullptr;
			//delete nowNode (:1000);
			//nowNode = nowNode->pNext (:1000->pNext )   <=== 오류 왜 ? 
			//nowNode != nullptr;
			//delete nowNode;
			//nowNode = nowNode->pNext
			//nowNode != nullptr;
			//delete nowNode;
			//nowNode = nowNode->pNext

			/// 코드가 이해하기 어려움.
			//while (nextNode != nullptr)
			//{
			//	// [now]노드를 [prev]에 담음
			//	prevNode = nowNode;

			//	// [now]에 [next]노드를 주소를 담음
			//	nowNode = nextNode;

			//	// [now]노드의 주소였던 prev 를 삭제한다.
			//	delete prevNode;

			//	// next 노드를 다시 초기화해줌
			//	nextNode = nowNode->pNext;
			//}


			/// 새로 만듦.
			// 내가 가지고 있는 모든 노드들을 파괴한다. 
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


			/// 기존 코드 
			/*
			   // 내가 가지고 있는 모든 노드들을 파괴한다.
			   Node* nowNode = m_front;

			   // 현재 노드 = 맨앞 노드의 다음 노드
			   while (m_front->pNext != nullptr)
			   {
				  Node* nextNode = m_front->pNext;
				  Node* frontNode = m_front->pPrev;
				  m_front = nextNode;
				  delete frontNode;
			   }
			   */
	}
	// 뒤에 입력
	void Push_back(Star* _star);
	// 앞에 입력
	void Push_front(Star* _star);
	// 뺀다 뒤에꺼
	void Pop_back();
	// 뺀다 뒤에꺼
	void Pop_front();
	// 비었는지 체크
	bool IsEmpty();
	// 리턴 front
	Node* GetFront();
	// 리턴 back
	Node* GetBack();
	// Search 찾을 값을 가지고 있는 주소를 반환한다.
	Node* Search(Star* _list);
	// 몇번 인덱스에 , 숫자 넣을지
	void Insert(Node* _node, Star* _star);
	// 몇번째 노드 삭제할건지
	void Delete(Node* _node);
	// 숫자를 입력하면 해당  노드의 값을 알려준다. 
	Node* At(int _index);

	// capacity 값 증가
	void Count();
};
