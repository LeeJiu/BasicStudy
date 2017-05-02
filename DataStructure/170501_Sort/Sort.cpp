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
	std::cout << "2. Insertion Sort" << std::endl;
	std::cout << "3. Shell Sort" << std::endl;
	std::cout << "4. Merge Sort" << std::endl << std::endl;
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
	case 3:
		std::cout << "[ Shell Sort ]" << std::endl;
		ShellSort(pArr, nArrNum);
		break;
	case 4:
		std::cout << "[ Merge Sort ]" << std::endl;
		pMergeArr = new int[nArrNum];
		MergeSort(pArr, 0, nArrNum - 1);
		delete[] pMergeArr;
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

bool Sort::ShellSort(int arr[], int num)
{
	int interval = num;

	while (interval >= 1)
	{
		interval *= 0.5;		//interval을 반으로 줄인다.

		for (int i = 0; i < interval; ++i)
		{
			IntervalSort(arr, i, num, interval);
		}
	}

	return true;
}

void Sort::IntervalSort(int arr[], int i, int num, int interval)
{
	int j = 0;
	bool move = false;

	for (int idx = i + interval; idx < num; idx += interval)
	{
		int temp = arr[idx];
		j = idx;

		if (arr[j - interval] > temp)
		{
			move = true;
		}
		else
		{
			move = false;
		}

		while (move)
		{
			arr[j] = arr[j - interval];
			j -= interval;

			if (j > interval && arr[j - interval] > temp)
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
}

bool Sort::MergeSort(int arr[], int begin, int end)
{
	int middle;

	if (begin < end)
	{
		middle = (begin + end) * 0.5;
		
		MergeSort(arr, begin, middle);
		MergeSort(arr, middle + 1, end);

		Merge(arr, begin, end);
	}

	return true;
}

void Sort::Merge(int arr[], int begin, int end)
{
	int middle, i, j, k;
	
	middle = (begin + end) * 0.5;
	i = begin;
	j = middle + 1;
	k = begin;

	// 병합할 두 부분 집합을 정렬 -> 추가적인 배열에 정렬된 데이터를 넣는다.
	while (i <= middle && j <= end)
	{
		if (arr[i] <= arr[j])
		{
			pMergeArr[k++] = arr[i++];
		}
		else
		{
			pMergeArr[k++] = arr[j++];
		}
	}

	// 한 부분 집합이 병합 행렬에 전부 들어가고,
	// 다른 부분 집합이 덜 들어간 경우
	if (i > middle)
	{
		for (int t = j; t <= end; ++t, ++k)
		{
			pMergeArr[k] = arr[t];
		}
	}
	else
	{
		for (int t = i; t <= middle; ++t, ++k)
		{
			pMergeArr[k] = arr[t];
		}
	}

	// 정렬된 배열을 원래 배열에 넣는다.
	for (int t = begin; t <= end; ++t)
	{
		arr[t] = pMergeArr[t];
	}
}
