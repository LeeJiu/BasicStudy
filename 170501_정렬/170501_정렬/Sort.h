#pragma once
#include <iostream>

#define MAXSIZE 8
#define PARENT(me)	((me - 1)/2)		//부모노드
#define LCHILD(me)	(2 * me + 1)		//왼쪽노드
#define RCHILD(me)	(LCHILD(me) + 1)		//오른쪽 노드 = (2 * me + 2)

using namespace std;

class Sort
{
public:
	Sort();
	~Sort();

	void QuickSort(int arr[], int begin, int end);				//퀵정렬 
	int Partition(int arr[], int begin, int end);				//퀵정렬 - 피벗기준 각자검사하는 함수
	void InsertionSort(int arr[], int size);					//삽입정렬
	void ShellSort(int arr[], int size);						//셸정렬 
	void IntervalSort(int arr[], int size, int interval);		//셸정렬 - 간격별 정렬 함수
	void MergeSort(int arr[], int begin, int end);				//병합정렬
	void Merge(int arr[], int begin, int middle, int end);		//병합정렬 - 병합부분
	void HeapSort(int arr[]);									//힙정렬
	void InsertHeap(int* tree, int data, int idx);				//힙정렬 - 힙에 배열을 넣는 함수
	void MaxHeap(int* tree, int idx);							//힙정렬 - 배열에 넣을 때 최대 힙으로 정렬함수
	int MaxHeap2(int* tree, int idx, int endIdx);				//힙정렬 - 하나씩 힙에서 제외할 때 최대 힙으로 재정렬
	int DeleteHeap(int* tree, int i);							//힙정렬 - 하나씩 힙에서 리턴
	void ViewHeap(int* tree);									//힙 배열 출력
	void Swap(int* data1, int* data2);							//데이터 값 이동	
	void PrintArr(int* arr, int size);							//모든 배열 출력
};

