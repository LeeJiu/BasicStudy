#pragma once
#include <iostream>

using namespace std;

struct treeNode{
	int data;
	treeNode* Left;
	treeNode* Right;
};

class LinkedBinaryTree
{
public:
	LinkedBinaryTree();
	~LinkedBinaryTree();

	//������ Ʈ���� �־��ְ� �װſ� ���� Ʈ���� ���鿩�� ���� üũ�ؾ� ������ �׽�Ʈ�̹Ƿ� �׳� Ŭ������ �ϳ��� Ʈ���� ��.
	bool IsEmpty(treeNode* p);
	treeNode* InsertNode(treeNode* p, int data);
	void DeleteNode(treeNode* root, int data);
	treeNode* SearchNode(treeNode* root, int data);
	void PrintPreOrder(treeNode* root);
	void PrintInOrder(treeNode* root);
	void PrintPostOrder(treeNode* root);
};

