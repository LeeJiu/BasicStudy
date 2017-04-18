#include "SingleLinked.h"

SingleLinked::SingleLinked()
{
	head = NULL;
}


SingleLinked::~SingleLinked()
{
}

//노드 추가 -> 순차적으로 뒤에 추가
void SingleLinked::insertFirstNode(int data)
{
	//첫 노드일때
	if (head == NULL)
	{
		head = new Node;
		head->data = data;
		head->next = NULL;

		return;
	}
}

void SingleLinked::insertNode(int data)
{
	for (Node* node = head; node != NULL; node = node->next)
	{
		if (node->next == NULL)
		{
			Node* n = new Node;
			n->data = data;
			n->next = NULL;
			node->next = n;

			return;
		}
	}
}

void SingleLinked::insertNode(int Cnt, int data)
{
	int cnt = 0;
	for (Node* node = head; node != NULL; node = node->next)
	{
		if (cnt == Cnt - 1)
		{
			Node* n = new Node;
			n->data = data;
			n->next = node->next;
			node->next = n;

			return;
		}
		cnt++;
	}
}

void SingleLinked::deleteNode(Node * n)
{
	delete(n);
}

void SingleLinked::deleteNode(int data)
{
	if (head == NULL)
	{
		//리스트가 없을 때
		cout << "No List for delete" << endl;
	}
	else 
	{
		for (Node* node = head; node != NULL; node = node->next)
		{
			if (node->next->data == data)
			{
				Node* temp = node->next->next;
				deleteNode(node->next);
				node->next = temp;
				
				return;
			}
		}
	}

}

void SingleLinked::SearchView(int data)
{
	if (head == NULL)
	{
		//리스트가 없을때
		cout << endl << "Search" << endl;
		printf("No List");
	}
	else
	{
		//리스트가 있을 때
		cout << endl << "Search" << endl;

		int cnt = 0;
		for (Node* node = head; node != NULL; node = node->next)
		{
			if(node->data == data)
				cout << cnt << "번째 값 : " << node->data << endl;
			cnt++;
		}
	}
}

Node * SingleLinked::Search(int data)
{
	if (head == NULL)
	{
		//리스트가 없을때
		printf("No List");
	}
	else
	{
		//리스트가 있을 때
		cout << endl << "Search" << endl;

		int cnt = 0;
		for (Node* node = head; node != NULL; node = node->next)
		{
			if (node->data == data)
				return node;
			cnt++;
		}
	}

}

void SingleLinked::Reverse()
{
	Node *p, *q, *r;

	p = head;
	q = NULL;
	
	while (p)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	
	head = q;
}

int SingleLinked::GetSize()
{
	int cnt = 0;
	for (Node* ptr = head; ptr != NULL; ptr = ptr->next)
	{
		cnt++;
	}

	return cnt;
}

void SingleLinked::PrintAll()
{
	if (head == NULL)
	{
		printf("No List");
	}
	else
	{
		for (Node* node = head; node != NULL; node = node->next)
		{
			cout << node->data << endl;
		}
	}
}
