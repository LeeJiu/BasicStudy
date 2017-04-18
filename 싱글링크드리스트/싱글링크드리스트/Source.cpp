#pragma once
#include "SingleLinked.h"

int main()
{
	SingleLinked* list = new SingleLinked();
	
	list->insertFirstNode(100);
	list->insertNode(200);
	list->insertNode(300);
	list->insertNode(400);

	list->PrintAll();
	
	cout << endl << "Reverse" << endl << endl;

	list->Reverse();

	list->PrintAll();
	
	//printf("size : %d\n", list->GetSize());


	return 0;
}
