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

	//원래는 트리를 넣어주고 그거에 대한 트리의 공백여부 등을 체크해야 하지만 테스트이므로 그냥 클래스를 하나의 트리로 봄.
	bool IsEmpty(treeNode* p);
	treeNode* InsertNode(treeNode* p, int data);
	void DeleteNode(treeNode* root, int data);
	treeNode* SearchNode(treeNode* root, int data);
	void PrintPreOrder(treeNode* root);
	void PrintInOrder(treeNode* root);
	void PrintPostOrder(treeNode* root);
};

