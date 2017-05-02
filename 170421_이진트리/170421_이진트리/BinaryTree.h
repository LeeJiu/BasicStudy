#pragma once
#include <iostream>
#define MAX_SIZE 16

using namespace std;

struct TreeNode {
	int key;
};

struct Tree {
	TreeNode treeArr[MAX_SIZE];
	int cur = 0;
};

class BinaryTree
{

public:
	Tree bTree;

	BinaryTree();
	~BinaryTree();

	void Add_Tree(Tree *target, int item);					//��带 �߰����ִ� Ʈ��
	void Erase_Tree(Tree * target);							//Ʈ������ ��� �ϳ� ���� �� ����
	void Show_Right_Childe(Tree *target, int idx);			//������ �ڽĳ��
	void Show_Left_Childe(Tree * target, int idx);			//���� �ڽĳ�� ������
	void Show_Parents(Tree * target, int idx);				//idx ���� �θ��� ������

};