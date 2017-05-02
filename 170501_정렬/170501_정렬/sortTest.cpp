#pragma once
#include "Sort.h"

int main()
{
	Sort* sort = new Sort();

	int arr[5] = { 67,5,3,18,27 };
	int size = sizeof(arr) / sizeof(int);

	sort->PrintArr(arr, size);
	
	sort->QuickSort(arr, 0, 4);

	sort->PrintArr(arr, size);

	return 0;
}