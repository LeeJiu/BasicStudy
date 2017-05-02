#pragma once
#include <iostream>

#define MAXSIZE 5

using namespace std;

class Sort
{
public:
	Sort();
	~Sort();

	int Partition(int arr[], int begin, int end);
	void QuickSort(int arr[], int begin, int end);
	void InsertionSort(int arr[], int size);
	void ShellSort(int arr[], int size);
	void IntervalSort(int arr[], int size, int interval);
	void MergeSort(int arr[], int begin, int end);
	void Merge(int arr[], int begin, int middle, int end);
	void PrintArr(int* arr, int size);
};

