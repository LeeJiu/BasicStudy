#include <iostream>
#include "BinarySearchTree.h"

int main()
{
	BinarySearchTree* tree = new BinarySearchTree;

	tree->AddNode(5); // root
	tree->AddNode(2);
	tree->AddNode(8);
	tree->AddNode(3);
	tree->AddNode(2); // 중복 데이터 삽입 시도
	tree->AddNode(1);
	tree->AddNode(9);

	tree->PrintTree();
	std::cout << std::endl;



	tree->Delete(5);

	tree->PrintTree();
	std::cout << std::endl;


	delete tree;

	return 0;
}