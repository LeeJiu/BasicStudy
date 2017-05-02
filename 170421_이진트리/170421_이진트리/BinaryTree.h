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

	void Add_Tree(Tree *target, int item);					//노드를 추가해주는 트리
	void Erase_Tree(Tree * target);							//트리에서 노드 하나 제거 후 리턴
	void Show_Right_Childe(Tree *target, int idx);			//오른쪽 자식노드
	void Show_Left_Childe(Tree * target, int idx);			//왼쪽 자식노드 보여줌
	void Show_Parents(Tree * target, int idx);				//idx 기준 부모노드 보여줌

};