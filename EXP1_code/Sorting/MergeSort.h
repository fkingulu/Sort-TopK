#include<iostream>
using namespace std;

extern int length;

template<typename T>
void merge(T* a, int left, int mid, int right) {
    int n1 = mid - left + 1; 
    int n2 = right - mid; 

    // 创建临时数组
    T* L = new T[n1];
    T* R = new T[n2];

    // 拷贝数据到临时数组
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // 合并临时数组回a[left..right]
    int i = 0; // 初始索引第一个子数组
    int j = 0; // 初始索引第二个子数组
    int k = left; // 初始索引合并的子数组
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // 拷贝L[]的剩余元素
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // 拷贝R[]的剩余元素
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

}

template<typename T>
void MergeSort(T* a, int left, int right) {
    if (left >= right) {
        return; 
    }
    int mid = left + (right - left) / 2;
    MergeSort(a, left, mid); 
    MergeSort(a, mid + 1, right); 
    merge(a, left, mid, right); 
}

