#pragma once
#include "Sort.h"

int main()
{
	Sort* sort = new Sort();

	//int arr[MAXSIZE] = { 67,5,3,18,27,31,1 };
	int arr[MAXSIZE] = { 77,55,34,51,2,9,5,15 };
	
	sort->PrintArr(arr, MAXSIZE);
	
	/*퀵 소트*/
	//sort->QuickSort(arr, 0, MAXSIZE - 1);
	//sort->PrintArr(arr, MAXSIZE);

	/*삽입 소트*/
	//sort->InsertionSort(arr, MAXSIZE);
	//sort->PrintArr(arr, MAXSIZE);

	/*셸 소트*/
	//sort->ShellSort(arr, MAXSIZE);
	//sort->PrintArr(arr, MAXSIZE);

	/*머지 소트*/
	//sort->MergeSort(arr, 0, MAXSIZE - 1);
	//sort->PrintArr(arr, MAXSIZE);

	/*힙 소트*/
	sort->HeapSort(arr);
	sort->PrintArr(arr, MAXSIZE);

	return 0;
}