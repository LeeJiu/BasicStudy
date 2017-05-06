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
	k = begin;		//tempArray의 인덱스
	
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

void Sort::HeapSort(int arr[])
{
	int hTree[MAXSIZE];
	for (int i = 0; i < MAXSIZE; i++)
	{
		InsertHeap(hTree, arr[i], i);
	}

	ViewHeap(hTree);

	for (int i = 0; i < MAXSIZE; i++)
	{
		arr[i] = DeleteHeap(hTree, i);
	}

	ViewHeap(hTree);
}

void Sort::InsertHeap(int *tree, int data, int idx)
{
	tree[idx] = data;
	MaxHeap(tree, idx);
}

void Sort::MaxHeap(int * tree, int idx)
{
	while (idx > 0)
	{
		if (tree[PARENT(idx)] < tree[idx])
		{
			int temp = tree[PARENT(idx)];
			tree[PARENT(idx)] = tree[idx];
			tree[idx] = temp;
			MaxHeap(tree, PARENT(idx));
		}
		else return;
	}
}

int Sort::MaxHeap2(int * tree, int idx, int endIdx)
{ 
	int targetIdx = 0;				//idx와 비교할 대상
	int lastLength = endIdx - 1;	//검사할 마지막 배열의 원소
	while (idx <= endIdx)
	{
		if (lastLength >= RCHILD(idx))
		{
			if (tree[LCHILD(idx)] > tree[RCHILD(idx)])
			{
				targetIdx = LCHILD(idx);
			}
			else targetIdx = RCHILD(idx);

			if (tree[idx] < tree[targetIdx])
			{
				Swap(&tree[idx], &tree[targetIdx]);
			}

			//2자식 있을때
			if (RCHILD(targetIdx) <= lastLength)
			{
				idx = targetIdx;
				continue;
			}
		}
		//1자식있을때
		else if (lastLength >= LCHILD(idx))
		{
			if (tree[idx] < tree[LCHILD(idx)])
			{
				Swap(&tree[idx], &tree[LCHILD(idx)]);
			}
		}
		return tree[endIdx];		//반환값은 마지막 
	}
}

void Sort::Swap(int* data1, int* data2)
{
	int temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}

int Sort::DeleteHeap(int* tree, int i)
{
	int result = tree[0];
	int temp = tree[0];
	tree[0] = tree[MAXSIZE - i - 1];
	tree[MAXSIZE - i - 1] = temp;

	if (MAXSIZE - i - 1 == 0)
	{
		return tree[0];
	}
	else
	{
		return MaxHeap2(tree, 0, (MAXSIZE - 1) - i);
	}
}

void Sort::ViewHeap(int * tree)
{

	cout << "힙 트리 => ";

	for (int i = 0; i < MAXSIZE; i++)
	{
		cout << tree[i] << " ";
	}
	cout << endl;
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
