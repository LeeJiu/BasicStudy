#pragma once
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

class SingleLinked
{
	Node* head;

public:
	SingleLinked();
	~SingleLinked();
	
	void insertFirstNode(int data);			//첫노드
	void insertNode(int data);	//n번째 노드
	void insertNode(int Cnt ,int data);	//n번째 노드
	void deleteNode(Node* n);			//해당 노드삭제
	void deleteNode(int data);			//데이터로 삭제
	void SearchView(int data);			//데이터로 탐색 후 보여줌
	Node* Search(int data);				//데이터로 탐색
	void Reverse();						//거꾸로
	int GetSize();						//크기
	void PrintAll();					//출력
};

