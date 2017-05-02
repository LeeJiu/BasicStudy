#include "LinkedBinaryTree.h"



LinkedBinaryTree::LinkedBinaryTree()
{
}

LinkedBinaryTree::~LinkedBinaryTree()
{
	
}

bool LinkedBinaryTree::IsEmpty(treeNode* p)
{
	if (p == NULL) return true;
	else return false;
}

treeNode* LinkedBinaryTree::InsertNode(treeNode* p, int data)
{
	//p�� ����Ű�� ���� ���� ��� x�� ����
	treeNode* newNode;
	if (p == NULL)
	{
		//malloc -> �ʿ��Ѹ�ŭ �޸� �Ҵ��û. ����Ŀ� free�� ����
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->data = data;
		newNode->Left = NULL;
		newNode->Right = NULL;
		return newNode;
	}
	else if (data < p->data) p->Left = InsertNode(p->Left, data);
	else if (data > p->data) p->Right = InsertNode(p->Right, data);
	else cout << "�ߺ��� Ű�� �Է� �Ұ�" << endl;

	return p;
}

void LinkedBinaryTree::DeleteNode(treeNode * root, int data)
{
	//root������ ã�Ƽ� key���� ���� ��� Ž��
	//succ�� �İ��� ���
	treeNode* parent, *p, *succ, *succ_parent;
	treeNode* child;

	//p�� �θ��带 ����Ŵ
	parent = NULL;
	//���� �˻��ϴ� ���
	p = root;
	while (p != NULL && p->data != data) //root�� ���� �ƴϰ�, ��Ʈ�� �����Ͱ� ã�� �����Ϳ� ���� �ʴµ��� �ݺ�
	{
		//p�� �˻��ϴ� p�� �θ�
		parent = p;
		if (p->data < data) p = p->Left;
		else if (p->data > data) p = p->Right;
	}

	//�����Ϳ� ������ ���� ������ Ž��
	if (p == NULL)
	{
		cout << "ã�� �����͸� ���� �ִ� ��尡 ����" << endl;
		return;
	}

	//Ž�� ���� �����Ͱ� ������ �߰���
	//������ 0
	if (p->Left == NULL && p->Right == NULL)
	{
		if (parent != NULL)
		{
			//p�� ����Ű�� �����͸� �η� ����Ŵ.
			if (parent->Left = p) parent->Left = NULL;
			else parent->Right = NULL;
		}
		else root = NULL;
	}

	//������ 1
	else if (p->Left == NULL || p->Right == NULL)
	{
		//p�� left�� ���� �ʾ����� �ڽĿ� p�� left�� �ְ� right �̸� right����.
		if (p->Left != NULL) child = p->Left;
		else child = p->Right;

		if (parent != NULL)
		{
			if (parent->Left = p) parent->Left = child;
			else parent->Right = child;
		}
		else root = child;
	}

	//������ 2

	else if (p->Left != NULL && p->Right != NULL)
	{
		succ_parent = p;
		succ = p->Left;
		while (succ->Right != NULL)
		{
			succ_parent = succ;
			succ = succ->Right;
		}
	
		if (succ_parent->Left == succ) succ_parent->Left = succ->Left;
		else succ_parent->Right = succ->Left;
		p->data = succ->data;
		p = succ;
	}

	free(p);
}

treeNode* LinkedBinaryTree::SearchNode(treeNode * root, int data)
{
	treeNode* p;
	p = root;
	while (p != NULL)
	{
		if (data < p->data) p = p->Left;
		else if (data == p->data) return p;
		else p = p->Right;
	}
	cout << "ã�� �����͸� ���� ��尡 �����ϴ�" << endl;
	return p;
}

void LinkedBinaryTree::PrintPreOrder(treeNode * root)
{
	//����Ž��
	if (root)
	{
		cout << root->data << " ";
		PrintInOrder(root->Left);
		PrintInOrder(root->Right);
	}
}

void LinkedBinaryTree::PrintInOrder(treeNode * root)
{
	//����Ž��
	if (root)
	{
		PrintInOrder(root->Left);
		cout << root->data << " ";
		PrintInOrder(root->Right);
	}
}

void LinkedBinaryTree::PrintPostOrder(treeNode * root)
{
	//����Ž��
	if (root)
	{
		PrintInOrder(root->Left);
		PrintInOrder(root->Right);
		cout << root->data << " ";
	}
}

