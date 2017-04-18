#include "SingleLinkedList.h"



SingleLinkedList::SingleLinkedList() : m_pHead(nullptr)
{
}


SingleLinkedList::~SingleLinkedList()
{
}

Node * SingleLinkedList::CreateNode(int data)
{
	Node* pNew = new Node;
	pNew->nData = data;
	pNew->pNext = nullptr;

	return pNew;
}

void SingleLinkedList::AddNode(int data)
{
	//노드를 생성한다.
	Node* node = CreateNode(data);

	//빈 리스트이면 / 헤드가 null이면
	if (m_pHead == nullptr)
	{
		m_pHead = node;
		return;
	}
	
	Node* tail = m_pHead;
	//꼬리를 찾는다.
	while (tail->pNext != nullptr)
	{
		tail = tail->pNext;
	}

	tail->pNext = node;
}

bool SingleLinkedList::InsertNode(Node * pre, int data)
{
	//노드를 생성한다.
	Node* node = CreateNode(data);

	if (pre == nullptr)
	{
		std::cout << "선행자가 null입니다." << std::endl;
		return false;
	}

	//선행자가 헤드일 때
	if (m_pHead == pre)
	{
		node->pNext = m_pHead->pNext;
		m_pHead->pNext = node;
		return true;
	}

	Node* cur = m_pHead->pNext;

	while (cur->pNext != nullptr && cur->pNext != pre)
	{
		cur = cur->pNext;
	}

	if (cur->pNext == nullptr)
	{
		std::cout << "선행자를 찾을 수 없습니다." << std::endl;
		return false;
	}

	//cur = pre
	cur = cur->pNext;
	node->pNext = cur->pNext;
	cur->pNext = node;

	return true;
}

bool SingleLinkedList::DeleteNode(Node * node)
{
	if (m_pHead == nullptr)
	{
		std::cout << "빈 리스트입니다." << std::endl;
		return false;
	}

	Node* cur = m_pHead;
	while (cur->pNext != nullptr && cur->pNext != node)
	{
		cur = cur->pNext;
	}

	if (cur->pNext == nullptr)
	{
		std::cout << "존재하지 않는 노드입니다." << std::endl;
		return false;
	}

	cur->pNext = node->pNext;
	delete node;

	return true;
}

Node * SingleLinkedList::SearchNode(int data)
{
	if (m_pHead == nullptr) 
	{
		std::cout << "빈 리스트입니다." << std::endl;
		return nullptr;
	}

	Node* cur = m_pHead;
	while (cur->nData != data && cur->pNext != nullptr)
	{
		cur = cur->pNext;
	}

	if (cur->pNext == nullptr && cur->nData != data)
	{
		std::cout << "리스트 안에 존재하지 않는 데이터입니다." << std::endl;
		return nullptr;
	}

	return cur;
}

bool SingleLinkedList::Reverse()
{
	if (m_pHead == nullptr)
	{
		std::cout << "빈 리스트입니다." << std::endl;
		return false;
	}

	if (m_pHead->pNext == nullptr)
	{
		std::cout << "데이터가 하나뿐인 리스트입니다." << std::endl;
		return false;
	}

	Node* p = m_pHead;
	Node* q = nullptr;
	Node* r = nullptr;

	while (p->pNext != nullptr)
	{
		r = q;
		q = p;
		p = p->pNext;
		q->pNext = r;
	}

	//마지막 노드를 가리키고 있는 p의 다음 노드를 q로
	p->pNext = q;
	m_pHead = p;

	return true;
}

void SingleLinkedList::PrintDataAll()
{
	if (m_pHead == nullptr)
	{
		std::cout << "빈 리스트입니다." << std::endl;
		return;
	}

	std::cout << "리스트를 전부 출력합니다." << std::endl;

	Node* tail = m_pHead;
	while (tail->pNext != nullptr)
	{
		std::cout << tail->nData << " -> ";
		tail = tail->pNext;
	}
	std::cout << tail->nData << std::endl;
}