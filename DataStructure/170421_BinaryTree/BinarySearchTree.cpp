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
		std::cout << "�ߺ��Ǵ� ������(" << data << ")�� ������ �� �����ϴ�." << std::endl;
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

	//������ 0�� ��
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
	//������ 1�� ��
	else if (node->pLChild == nullptr || node->pRChild == nullptr)
	{
		if (node->pLChild != nullptr)
		{
			node->nData = node->pLChild->nData;
			delete node->pLChild;
			node->pLChild = nullptr;
		}
		else if (node->pRChild != nullptr)
		{
			node->nData = node->pRChild->nData;
			delete node->pRChild;
			node->pRChild = nullptr;
		}
	}
	//������ 2�� ��
	else
	{
		//���� ���� Ʈ������ ���� ū ���� ã�´�.
		Node* max = GetMaxNode(node->pLChild);
		//ū ���� ��Ʈ ��Ʈ�� �ְ�
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
		std::cout << "���� Ʈ���Դϴ�." << std::endl;
		return;
	}

	int num = 0;
	std::cout << "< 1 : ���� ��ȸ, 2 : ���� ��ȸ, 3 : ���� ��ȸ >" << std::endl;
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
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
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
