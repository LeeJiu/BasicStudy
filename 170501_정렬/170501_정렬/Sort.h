#pragma once
#include <iostream>

using namespace std;

class Sort
{
public:
	Sort();
	~Sort();

	int Partition(int arr[], int begin, int end);
	void QuickSort(int arr[], int begin, int end);
	void PrintArr(int* arr, int size);
};

