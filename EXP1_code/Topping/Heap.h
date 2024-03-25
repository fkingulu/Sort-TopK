#include<iostream>
#include"../config.h"
using namespace std;

extern int length;

template<typename T>
void DownFilter(T* array, int pos, int length_)
{
     int left_child = 2 * pos + 1; 
    int right_child = 2 * pos + 2; 
    int max_index = pos; // 最大值索引

    if (left_child < length_ && array[left_child] > array[max_index])
    {
        max_index = left_child;
    }

    if (right_child < length_ && array[right_child] > array[max_index])
    {
        max_index = right_child;
    }

    if (max_index != pos)
    {
        std::swap(array[pos], array[max_index]);
        DownFilter(array, max_index, length_);
    }
}

template<typename T>
void UpFilter(T* array, int pos)
{
    int father_pos = (pos - 1) / 2;
    if (pos != 0 && array[pos] > array[father_pos])
    {
        swap(array[pos], array[father_pos]);
        UpFilter(array, father_pos);
    }
}

template<typename T>
void BuildHeap(T* array)
{
    for (int pos = (length - 1) / 2; pos >= 0; pos--)
    {
        DownFilter(array, pos, length);
    }

}

template<typename T>
void HeapTopK(T* array, int K)
{
    BuildHeap(array);

    int length_ = length;
    int count = K;
    while (count--)
    {
        swap(array[0], array[length_ - 1]);
        length_--;
        DownFilter(array, 0, length_);

        #ifdef HeapTopPrint
            // for (int i = 0; i < length;i++){
            //     cout << array[i] << " ";
            // }
            // cout << endl;
        #endif
    }

    #ifdef HeapTopPrint
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