#include "BinaryTree.h"



BinaryTree::BinaryTree()
{
	bTree.treeArr[bTree.cur].key = 0;
	bTree.cur += 1;
}


BinaryTree::~BinaryTree()
{
}

void BinaryTree::Add_Tree(Tree * target, int item)
{
	if (target->cur == MAX_SIZE)	//����� �ִ��϶�
	{
		cout << "List is FULL" << endl;
		return;
	}
	target->treeArr[target->cur].key = item;
	target->cur = target->cur + 1;
}

void BinaryTree::Erase_Tree(Tree * target)
{
	if (target->cur == 0)
	{
		cout << "List is Empty" << endl;
		return;
	}

	target->cur -= 1;
}

void BinaryTree::Show_Left_Childe(Tree * target, int idx)
{
	if (idx * 2 > MAX_SIZE)
	{
		cout << "This Node is Terminal Node" << endl;
		return;
	}
	cout << "left child is " << target->treeArr[idx * 2].key << endl;
}

void BinaryTree::Show_Right_Childe(Tree * target, int idx)
{
	if (idx * 2 + 1 > MAX_SIZE)
	{
		cout << "This Node is Terminal Node" << endl;
		return;
	}
	cout << "right child is " << target->treeArr[idx * 2 + 1].key << endl;
}


//idx��°�� ������ �θ��� ������
void BinaryTree::Show_Parents(Tree * target, int idx)
{
	if (idx <= 0)
	{
		cout << endl;
		return;
	}

	cout <<  target->treeArr[idx].key <<endl;
	//����Ʈ���̹Ƿ� �θ�� ������ 2�� ���� ��
	return Show_Parents(target, idx / 2);
}

