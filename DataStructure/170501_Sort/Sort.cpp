#include "Sort.h"



Sort::Sort()
{
}


Sort::~Sort()
{
}

void Sort::InitData()
{
	std::cout << "Data »ðÀÔ °³¼ö : ";
	std::cin >> nArrNum;

	pArr = new int[nArrNum];

	for (int i = 0; i < nArrNum; ++i)
	{
		std::cout << i + 1 << " Data : ";
		std::cin >> *pArr++;
	}

	pArr -= nArrNum;
}

void Sort::PrintData()
{
	std::cout << "Print Data" << std::endl;

	for (int i = 0; i < nArrNum; ++i)
	{
		std::cout << i + 1 << " Data : " << *pArr++ << std::endl;
	}

	pArr -= nArrNum;
}

void Sort::SelectSort()
{
	std::cout << "Select Sort" << std::endl;
	
	QuickSort(pArr, 0, nArrNum - 1);
}

bool Sort::QuickSort(int arr[], int begin, int end)
{
	int index = 0;

	if (begin < end)
	{
		index = Partition(arr, begin, end);
		QuickSort(arr, begin, index - 1);
		QuickSort(arr, index + 1, end);
	}

	return true;
}

int Sort::Partition(int arr[], int begin, int end)
{
	int pivot = (begin + end) / 2;
	int left = begin;
	int right = end;

	while (left < right)
	{
		while (arr[left] < arr[pivot] && left < right)
		{
			left++;
		}

		while (arr[right] >= arr[pivot] && left < right)
		{
			right--;
		}

		if (left < right)
		{
			int temp;
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	
	int temp;
	temp = arr[pivot];
	arr[pivot] = arr[right];
	arr[right] = temp;

	return right;
}
