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
	//p가 가리키는 노드와 비교해 노드 x를 삽입
	treeNode* newNode;
	if (p == NULL)
	{
		//malloc -> 필요한만큼 메모리 할당요청. 사용후엔 free로 해제
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->data = data;
		newNode->Left = NULL;
		newNode->Right = NULL;
		return newNode;
	}
	else if (data < p->data) p->Left = InsertNode(p->Left, data);
	else if (data > p->data) p->Right = InsertNode(p->Right, data);
	else cout << "중복된 키값 입력 불가" << endl;

	return p;
}

void LinkedBinaryTree::DeleteNode(treeNode * root, int data)
{
	//root노드부터 찾아서 key값과 같은 노드 탐색
	//succ은 후계자 노드
	treeNode* parent, *p, *succ, *succ_parent;
	treeNode* child;

	//p의 부모노드를 가리킴
	parent = NULL;
	//현재 검사하는 노드
	p = root;
	while (p != NULL && p->data != data) //root가 널이 아니고, 루트의 데이터가 찾는 데이터와 같지 않는동안 반복
	{
		//p는 검사하는 p의 부모
		parent = p;
		if (p->data < data) p = p->Left;
		else if (p->data > data) p = p->Right;
	}

	//데이터와 같은게 없고 끝까지 탐색
	if (p == NULL)
	{
		cout << "찾는 데이터를 갖고 있는 노드가 없음" << endl;
		return;
	}

	//탐색 도중 데이터가 같은것 발견함
	//차수가 0
	if (p->Left == NULL && p->Right == NULL)
	{
		if (parent != NULL)
		{
			//p를 가리키던 포인터를 널로 가리킴.
			if (parent->Left = p) parent->Left = NULL;
			else parent->Right = NULL;
		}
		else root = NULL;
	}

	//차수가 1
	else if (p->Left == NULL || p->Right == NULL)
	{
		//p의 left가 비지 않았으면 자식에 p의 left를 넣고 right 이면 right넣음.
		if (p->Left != NULL) child = p->Left;
		else child = p->Right;

		if (parent != NULL)
		{
			if (parent->Left = p) parent->Left = child;
			else parent->Right = child;
		}
		else root = child;
	}

	//차수가 2

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
	cout << "찾는 데이터를 가진 노드가 없습니다" << endl;
	return p;
}

void LinkedBinaryTree::PrintPreOrder(treeNode * root)
{
	//전위탐색
	if (root)
	{
		cout << root->data << " ";
		PrintInOrder(root->Left);
		PrintInOrder(root->Right);
	}
}

void LinkedBinaryTree::PrintInOrder(treeNode * root)
{
	//중위탐색
	if (root)
	{
		PrintInOrder(root->Left);
		cout << root->data << " ";
		PrintInOrder(root->Right);
	}
}

void LinkedBinaryTree::PrintPostOrder(treeNode * root)
{
	//후위탐색
	if (root)
	{
		PrintInOrder(root->Left);
		PrintInOrder(root->Right);
		cout << root->data << " ";
	}
}

