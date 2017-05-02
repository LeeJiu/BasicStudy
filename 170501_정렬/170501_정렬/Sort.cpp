#include "Sort.h"



Sort::Sort()
{
}


Sort::~Sort()
{
}

int Sort::Partition(int arr[], int begin, int end)
{
	int pivot = (begin + end) / 2;
	int L = begin;
	int R = end;
	
	while (L < R)
	{
		while (arr[L] < arr[pivot] && L < R) L++;
		while (arr[R] >= arr[pivot] && L < R) R--;
		if (L < R)
		{
			int temp = arr[L];
			arr[L] = arr[R];
			arr[R] = temp;
		}
	}
	//L == R
	int temp = arr[pivot];
	arr[pivot] = arr[R];
	arr[R] = temp;

	return R;
}

void Sort::QuickSort(int arr[], int begin, int end)
{
	if (begin < end)
	{
		int pivot = Partition(arr, begin, end);
		QuickSort(arr, begin, pivot - 1);
		QuickSort(arr, pivot + 1, end);
	}
}

void Sort::PrintArr(int* arr, int size)
{
	cout << "¹è¿­arr => ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl << endl;

}
