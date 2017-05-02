#pragma once
#include "Sort.h"

int main()
{
	Sort* sort = new Sort();

	int arr[MAXSIZE] = { 67,5,3,18,27 };
	//int arr[8] = { 77,55,34,51,2,9,5,15 };
	int size = sizeof(arr) / sizeof(int);

	sort->PrintArr(arr, size);
	
	/*퀵 소트*/
	//sort->QuickSort(arr, 0, size - 1);
	//sort->PrintArr(arr, size);

	/*삽입 소트*/
	//sort->InsertionSort(arr, size);
	//sort->PrintArr(arr, size);

	/*셸 소트*/
	//sort->ShellSort(arr, size);
	//sort->PrintArr(arr, size);

	/*머지 소트*/
	sort->MergeSort(arr, 0, size - 1);
	sort->PrintArr(arr, size);

	return 0;
}