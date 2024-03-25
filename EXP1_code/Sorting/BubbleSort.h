#include<iostream>
#include"../config.h"
using namespace std;

extern int length;

template<typename T>
void BubbleSort(T* a)
{
    T m;
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - i; j++)
            if(*(a+j)>*(a+j+1))
            {
                m = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = m;
            }
        #ifdef BubbleSortPrint
            for (int j = 0; j < length;j++){
                cout << *(a + j);
                cout << (j == length - 1 ? "\n" : " ");
            }
        #endif
    }
}