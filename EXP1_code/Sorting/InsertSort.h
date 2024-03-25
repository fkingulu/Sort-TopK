#include<iostream>
#include"../config.h"
using namespace std;

extern int length;

template<typename T>
void InsertSort(T* a)
{
    int j;
    for (int i = 1; i < length; i++)
    {
        T m = a[i];
        for (j = i - 1; j >= 0 && a[j] > m; j--)
        {    
            a[j + 1] = a[j];
        }
        a[j + 1] = m;

        #ifdef InsertSortPrint
            for (int k = 0; k < length;k++){
                cout << *(a + k);
                cout << (k == length - 1 ? "\n" : " ");
            }
        #endif
    }
}