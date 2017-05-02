#pragma once
#include "BinaryTree.h"
#include "LinkedBinaryTree.h"

int main()
{
	/*이진트리 - 1차원배열*/
	//BinaryTree * tree = new BinaryTree();
	//
	//tree->Add_Tree(&tree->bTree, 10);
	//tree->Add_Tree(&tree->bTree, 5);
	//tree->Add_Tree(&tree->bTree, 4);
	//tree->Add_Tree(&tree->bTree, 7);
	//tree->Add_Tree(&tree->bTree, 9);
	//tree->Add_Tree(&tree->bTree, 11);
	//tree->Add_Tree(&tree->bTree, 15);
	//tree->Add_Tree(&tree->bTree, 6);
	//tree->Add_Tree(&tree->bTree, 3);
	//
	//for (int i = 0; i < tree->bTree.cur - 1; i++)
	//{
	//	cout << tree->bTree.treeArr[i + 1].key << endl;
	//}
	//
	//cout << endl;
	//
	//tree->Show_Left_Childe(&tree->bTree, 7);
	//tree->Show_Right_Childe(&tree->bTree, 7);
	//
	//cout << endl;
	//
	//tree->Show_Parents(&tree->bTree, 6);


	/*이진트리 - 연결리스트*/
	LinkedBinaryTree* LTree = new LinkedBinaryTree();
	treeNode* root = NULL;


	/*if (LTree->IsEmpty(root))
		cout << "비엇음" << endl;
	else
		cout << "안비었음" << endl;
	*/
	root = LTree->InsertNode(root, 11);
	LTree->InsertNode(root, 9);
	LTree->InsertNode(root, 25);
	LTree->InsertNode(root, 5);
	LTree->InsertNode(root, 8);
	LTree->InsertNode(root, 6);

	LTree->PrintPreOrder(root);
	cout << endl;
	LTree->PrintInOrder(root);
	cout << endl;
	LTree->PrintPostOrder(root);
	cout << endl;

	return 0;
}