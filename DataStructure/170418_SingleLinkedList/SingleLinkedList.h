#pragma once
#include <iostream>

struct Node
{
	int nData;
	Node* pNext;
};

class SingleLinkedList
{
private:
	Node* m_pHead;

public:
	SingleLinkedList();
	~SingleLinkedList();

	Node* CreateNode(int data);
	void AddLastNode(int data);
	void AddFirstNode(int data);
	bool InsertNode(Node* pre, int data);
	bool DeleteNode(Node* node);
	Node* SearchNode(int data);
	bool Reverse();
	void PrintDataAll();
};

