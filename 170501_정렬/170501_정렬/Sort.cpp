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

void Sort::InsertionSort(int arr[], int size)
{
	int j; //이동하며 비교할 S집합 인덱스값
	int temp;	//이동할, U집합의 맨 첫번째 값을 저장할 임시장소
	bool move = false;	//이동할지 안할지~

	for (int i = 1; i < size; i++)
	{
		temp = arr[i];
		j = i;
		if (arr[j - 1] > temp) move = true;
		else move = false;
		while (move)
		{
			arr[j] = arr[j - 1];
			j = j - 1;			// S집합의 인덱스를 낮추는것. i (X)
			if (j > 0 && arr[j - 1] > temp) move = true;
			else move = false;
		}

		arr[j] = temp;
	}
}

void Sort::ShellSort(int arr[], int size)
{
	int interval = size;
	while (interval >= 1)
	{
		interval = interval / 2;
		for (int i = 0; i < interval; i++)
		{
			IntervalSort(arr, size, interval);
		}
	}
}

void Sort::IntervalSort(int arr[], int size, int interval)
{
	int i, j, temp;
	bool move;
	for (i = interval; i < size; i = i ++)
	{
		temp = arr[i];
		j = i;
		if (arr[j - interval] > temp) move = true;
		else move = false;
		while (move)
		{
			arr[j] = arr[j - interval];
			j = j - interval;
			if (j > 0 && arr[j - interval] > temp) move = true;
			else move = false;
		}
		arr[j] = temp;
	}
}

void Sort::MergeSort(int arr[], int begin, int end)
{
	if (begin < end)
	{
		int middle = (begin + end) / 2;
		MergeSort(arr, begin, middle);		//왼쪽병합소트
		MergeSort(arr, middle + 1, end);	//오른쪽 병합소트

		Merge(arr, begin, middle, end);		//병합
	}
}

void Sort::Merge(int arr[], int begin, int middle, int end)
{
	int i, j, m;
	int k; //결과 배열의 인덱스

	i = begin;		//begin쪽 인덱스
	j = middle + 1;	//middle부터 인덱스
	k = begin;
	
	int tempArray[MAXSIZE];

	//begin부터 middle까지, middle + 1부터 end까지 비교
	while (i <= middle && j <= end) {
		if (arr[i] < arr[j])
		{
			tempArray[k] = arr[i];
			i++;
		}
		else if(arr[i] > arr[j])
		{
			tempArray[k] = arr[j];
			j++;
		}
		k++;
	}

	//begin쪽 처리 완료/ end쪽 남아있으면
	//end index는 그냥 결과에 복사
	if (i > middle)
	{
		for (m = j; m <= end; m++, k++)
		{
			tempArray[k] = arr[m];
		}
	}
	//아직 begin쪽이 남아있을 경우 left를 순차적으로 
	else
	{
		for (m = i; m <= middle; m++, k++)
		{
			tempArray[k] = arr[m];
		}
	}

	for (m = begin; m <= end; m++)
	{
		arr[m] = tempArray[m];
	}

}

void Sort::PrintArr(int* arr, int size)
{
	cout << "배열arr => ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl << endl;

}
