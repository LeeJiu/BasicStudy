#pragma once
#include <iostream>

class Sort
{
private:
	int* pArr;
	int nArrNum;

public:
	Sort();
	~Sort();

	void InitData();
	void PrintData();
	void SelectSort();

	// Quick Sort
	bool QuickSort(int arr[], int begin, int end);
	int Partition(int arr[], int begin, int end);
};

