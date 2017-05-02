#include "Sort.h"



Sort::Sort()
{
}


Sort::~Sort()
{
	delete[] pArr;
}

void Sort::InitData()
{
	std::cout << "Data 삽입 개수 : ";
	std::cin >> nArrNum;

	pArr = new int[nArrNum];

	for (int i = 0; i < nArrNum; ++i)
	{
		std::cout << i + 1 << " Data : ";
		std::cin >> *pArr++;
	}

	pArr -= nArrNum;

	std::cout << std::endl;
}

void Sort::PrintData()
{
	std::cout << "Print Data" << std::endl;

	for (int i = 0; i < nArrNum; ++i)
	{
		std::cout << i + 1 << " Data : " << *pArr++ << std::endl;
	}

	pArr -= nArrNum;
	
	std::cout << std::endl;
}

void Sort::SelectSort()
{
	int num = 0;

	std::cout << "[ Sort List ]" << std::endl;
	std::cout << "1. Quick Sort" << std::endl;
	std::cout << "2. Insertion Sort" << std::endl << std::endl;
	std::cout << "Select Sort : ";
	std::cin >> num;

	std::cout << std::endl;

	switch (num)
	{
	case 1:
		std::cout << "[ Quick Sort ]" << std::endl;
		QuickSort(pArr, 0, nArrNum - 1);
		break;
	case 2:
		std::cout << "[ Insertion Sort ]" << std::endl;
		InsertionSort(pArr, nArrNum);
		break;
	default:
		break;
	}
	
	
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

bool Sort::InsertionSort(int arr[], int num)
{
	int j = 0;
	bool move = false;

	for (int i = 1; i < num; ++i)
	{
		int temp = arr[i];
		j = i;

		if (arr[j - 1] > temp)
		{
			move = true;
		}
		else
		{
			move = false;
		}

		while (move)
		{
			arr[j] = arr[j - 1];	//자리 이동
			j--;

			if (j > 0 && arr[j - 1] > temp)
			{
				move = true;
			}
			else
			{
				move = false;
			}
		}

		arr[j] = temp;
	}

	return true;
}
