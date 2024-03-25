#include<iostream>
#include"../config.h"

extern int length;

template<typename T>
void SelectSort(T* a)
{
    for (int i = 0; i < length - 1; i++)
    {
        T min = a[i];
        int pos;
        for (int j = i + 1; j < length; j++)
        {
            if(a[j] < min){
                min = a[j];
                pos = j;
            }
        }
        a[pos] = a[i];
        a[i] = min;

        #ifdef SelectSortPrint
            for (int j = 0; j < length;j++){
                cout << *(a + j);
                cout << (j == length - 1 ? "\n" : " ");
            }
        #endif
    }
}