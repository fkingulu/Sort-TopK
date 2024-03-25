#include<iostream>
#include"../config.h"

using namespace std;

extern int length;

template<typename T>
int Partition1(T* a, int low, int high)
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
	return high;
}

template<typename T>
int QuickSelect(T* array, int low, int high, int K) // 找到一个pivot值，使得pivotpos右边恰有K-1个大于pivot的值
{
    if(low >= high)
        return low;

    int pivotpos = Partition1(array, low, high);
    int temp = high - pivotpos + 1; // 大于pivot的值的个数（含pivot） 

    if(temp == K)
        return pivotpos;
    else if (temp > K)
        return QuickSelect(array, pivotpos + 1, high, K); // 大于pivot个数多于K，因此从右边重新找K个大于新pivot的。 
    else
        return QuickSelect(array, low, pivotpos - 1, K - temp); // 大于pivot个数少于K，因此从左边再找K - (high + 1 - pivotpos)个小于新pivot的。 
}

template<typename T>
void QuickTop(T* array, int K)
{
    int pivotpos = QuickSelect(array, 0, length, K);

    #ifdef QuickTopPrint
        for (int i = 1; i <= K; i++){
            cout << array[length - i] << " ";
        }
        cout << endl;
        for (int i = K + 1; i <= length; i++){
            cout << array[length - i] << " ";
        }
        cout << endl;
    #endif
}