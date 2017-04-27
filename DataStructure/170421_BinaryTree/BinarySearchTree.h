#pragma once
#include <iostream>

struct Node
{
	int nData;
	Node* pLChild;
	Node* pRChild;
	Node* pParent;
};

class BinarySearchTree
{
private:
	Node* m_pRoot;

public:
	BinarySearchTree();
	~BinarySearchTree();

	Node* CreateNode(int data);
	bool AddNode(int data);
	bool InsertNode(Node* root, int data);
	bool Delete(int data);
	Node* SearchNode(Node* root, int data);
	Node* GetMaxNode(Node* root);
	Node* GetMinNode(Node* root);
	void PrintTree();

	void PreOrder(Node* root);	//DLR
	void InOrder(Node* root);	//LDR
	void PostOrder(Node* root);	//LRD
};

