#pragma once
#include <iostream>

class Sort
{
private:
	int* pArr;
	int* pMergeArr;
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

	// Insertion Sort
	bool InsertionSort(int arr[], int num);

	// Shell Sort
	bool ShellSort(int arr[], int num);
	void IntervalSort(int arr[], int i, int num, int interval);

	// Merge Sort
	bool MergeSort(int arr[], int begin, int end);
	void Merge(int arr[], int begin, int end);
};

