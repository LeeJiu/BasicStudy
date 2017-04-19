#include <iostream>
#include "SingleLinkedList.h"


int main()
{
	SingleLinkedList* list = new SingleLinkedList;
	
	std::cout << "1 ~ 10까지의 숫자를 순서대로 리스트에 넣습니다." << std::endl;
	
	for (int i = 0; i < 10; ++i)
	{
		list->AddLastNode(i + 1);
	}
	list->PrintDataAll();

	std::cout << std::endl;



	std::cout << "리스트의 맨 앞에 데이터 77을 추가합니다." << std::endl;
	list->AddFirstNode(77);

	list->PrintDataAll();

	std::cout << std::endl;



	std::cout << "데이터 5를 가지고 있는 노드를 찾습니다." << std::endl;
	
	Node* search = list->SearchNode(5);
	std::cout << "찾은 노드 데이터 : " << search->nData << std::endl;

	std::cout << std::endl;




	std::cout << "데이터 5 뒤에 다른 데이터를 삽입합니다." << std::endl;
	list->InsertNode(search, 20);

	std::cout << std::endl;

	list->PrintDataAll();

	std::cout << std::endl;




	std::cout << "리스트를 역순으로 정렬합니다." << std::endl;
	list->Reverse();

	list->PrintDataAll();

	std::cout << std::endl;


	std::cout << "리스트에서 데이터 7을 찾아 해당 노드를 삭제합니다." << std::endl;
	search = list->SearchNode(7);
	list->DeleteNode(search);

	list->PrintDataAll();

	std::cout << std::endl;



	std::cout << "예외 처리를 확인합니다." << std::endl;
	std::cout << "리스트에 존재하지 않는 데이터를 찾아 삭제를 시도합니다." << std::endl;
	search = list->SearchNode(30);
	list->DeleteNode(search);
	list->InsertNode(search, 15);

	return 0;
}