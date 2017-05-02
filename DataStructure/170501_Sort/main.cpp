#include "Sort.h"

int main()
{
	Sort* sort = new Sort;

	sort->InitData();
	sort->PrintData();
	sort->SelectSort();
	sort->PrintData();

	delete sort;
	sort = nullptr;

	return 0;
}