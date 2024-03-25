#include<iostream>
#include"../config.h"
using namespace std;

extern int length;

template<typename T>
int Partition(T* a, int low, int high)
{
	int pivot = a[low];
	while (low < high) {
		while (low<high && a[high] >= pivot) 
			high--;
		a[low] = a[high];
		while (low < high && a[low] <= pivot)
			low++;
		a[high] = a[low];
	}
	a[high] = pivot;
    #ifdef QuickSortPrint
        for (int i = 0; i < length; i++) {
            cout << a[i];
            cout << (i == length - 1 ? "\n" : " ");
        }
    #endif
	return high;
}

template<typename T>
void QuickSort(T* a, int low, int high)
{
	if (low < high) {
		int pivotpos = Partition(a, low, high);
		QuickSort(a, low, pivotpos - 1);
		QuickSort(a, pivotpos + 1, high);
	}
}
