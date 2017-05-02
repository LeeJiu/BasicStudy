#include "BinarySearchTree.h"



BinarySearchTree::BinarySearchTree() : m_pRoot(nullptr)
{
}


BinarySearchTree::~BinarySearchTree()
{
}

Node * BinarySearchTree::CreateNode(int data)
{
	Node* node = new Node;
	node->nData = data;
	node->pLChild = nullptr;
	node->pRChild = nullptr;
	node->pParent = nullptr;

	return node;
}

bool BinarySearchTree::AddNode(int data)
{
	if (m_pRoot == nullptr)
	{
		m_pRoot = CreateNode(data);
		return true;
	}

	return InsertNode(m_pRoot, data);
}

bool BinarySearchTree::InsertNode(Node* root, int data)
{
	if (root->nData > data)
	{
		if (root->pLChild == nullptr)
		{
			root->pLChild = CreateNode(data);
			root->pLChild->pParent = root;
			return true;
		}
		else
		{
			return InsertNode(root->pLChild, data);
		}
	}
	else if (root->nData < data)
	{
		if (root->pRChild == nullptr)
		{
			root->pRChild = CreateNode(data);
			root->pRChild->pParent = root;
			return true;
		}
		else
		{
			return InsertNode(root->pRChild, data);
		}
	}
	else
	{
		std::cout << "중복되는 데이터(" << data << ")는 저장할 수 없습니다." << std::endl;
		return false;
	}
}

bool BinarySearchTree::Delete(int data)
{
	Node* node = SearchNode(m_pRoot, data);
	if (node == nullptr)
	{
		return false;
	}

	//차수가 0일 때
	if (node->pLChild == nullptr && node->pRChild == nullptr)
	{
		Node* parent = node->pParent;

		if (parent->pLChild == node)
		{
			delete parent->pLChild;
			parent->pLChild = nullptr;
		}
		else
		{
			delete parent->pRChild;
			parent->pRChild = nullptr;
		}
	}
	//차수가 1일 때
	else if (node->pLChild == nullptr || node->pRChild == nullptr)
	{
		Node* parent = node->pParent;
		
		if (node->pLChild != nullptr)
		{
			if (parent->pLChild == node)
			{
				parent->pLChild = node->pLChild;
			}
			else if (parent->pRChild == node)
			{
				parent->pRChild = node->pLChild;
			}
		}
		else if (node->pRChild != nullptr)
		{
			if (parent->pLChild == node)
			{
				parent->pLChild = node->pRChild;
			}
			else if (parent->pRChild == node)
			{
				parent->pRChild = node->pRChild;
			}
		}
		delete node;
		node = nullptr;
	}
	//차수가 2일 때
	else
	{
		//왼쪽 서브 트리에서 가장 큰 값을 찾는다.
		Node* max = GetMaxNode(node->pLChild);
		//큰 값을 루트 노트에 넣고
		node->nData = max->nData;
		
		Node* parent = max->pParent;
		if (parent->pLChild == max)
		{
			delete parent->pLChild;
			parent->pLChild = nullptr;
		}
		else
		{
			delete parent->pRChild;
			parent->pRChild = nullptr;
		}
	}

	return true;
}

Node * BinarySearchTree::SearchNode(Node * root, int data)
{
	if (root->nData == data)
	{
		return root;
	}
	else if (root->nData > data)
	{
		return SearchNode(root->pLChild, data);
	}
	else
	{
		return SearchNode(root->pRChild, data);
	}

	return nullptr;
}

Node * BinarySearchTree::GetMaxNode(Node * root)
{
	if (root->pRChild == nullptr)
	{
		return root;
	}
	else
	{
		return GetMaxNode(root->pRChild);
	}
}

Node * BinarySearchTree::GetMinNode(Node * root)
{
	if (root->pLChild == nullptr)
	{
		return root;
	}
	else
	{
		return GetMinNode(root->pLChild);
	}
}

void BinarySearchTree::PrintTree()
{
	if (m_pRoot == nullptr)
	{
		std::cout << "공백 트리입니다." << std::endl;
		return;
	}

	int num = 0;
	std::cout << "< 1 : 전위 순회, 2 : 중위 순회, 3 : 후위 순회 >" << std::endl;
	std::cin >> num;

	switch (num)
	{
	case 1:
		PreOrder(m_pRoot);
		break; 
	case 2:
		InOrder(m_pRoot);
		break; 
	case 3:
		PostOrder(m_pRoot);
		break;
	default:
		std::cout << "잘못된 입력입니다." << std::endl;
		break;
	}

	std::cout << std::endl;
}

void BinarySearchTree::PreOrder(Node* root)
{
	std::cout << root->nData << ", ";

	if (root->pLChild != nullptr)
	{
		PreOrder(root->pLChild);
	}
	
	if (root->pRChild != nullptr)
	{
		PreOrder(root->pRChild);
	}
}

void BinarySearchTree::InOrder(Node* root)
{
	if (root->pLChild != nullptr)
	{
		InOrder(root->pLChild);
	}

	std::cout << root->nData << ", ";
	
	if (root->pRChild != nullptr)
	{
		InOrder(root->pRChild);
	}
}

void BinarySearchTree::PostOrder(Node* root)
{
	if (root->pLChild != nullptr)
	{
		PostOrder(root->pLChild);
	}

	if (root->pRChild != nullptr)
	{
		PostOrder(root->pRChild);
	}

	std::cout << root->nData << ", ";
}
