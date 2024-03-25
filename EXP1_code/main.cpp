#include<iostream>
#include<chrono>

#include"Sorting/Sorting.hpp"
#include"Topping/Topping.hpp"

#include"readnum.h"
#include"writenum.h"

#include"config.h"


using namespace std;

int *array;
int length = LENGTH;
int K = KNUM;
int sample = SAMPLE;

enum class SortMethod {
    Quick,
    Bubble,
    Select,
    Insert,
    Merge
};

enum class TopMethod {
    Quick,
    Heap
};

void PrintArray(int *a, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

double calculateMean(const std::vector<double>& vec) {
    double sum = 0.0;
    for (double num : vec) {
        sum += num;
    }
    return sum / vec.size();
}

int main()
{
    string DataFilePath = "../../Data/"+to_string(length)+"/numbers";
    string ResultFilePath = "../../Results_Topping/"+to_string(length)+"/result";

    #if defined(write)
        int minR = 0, maxR = length*2;
        for (int i = 0; i < sample;i++)
        {
            string write_file_path = DataFilePath + to_string(i) + ".txt";
            WriteNumbers(write_file_path, length, minR, maxR);
        }
    #elif defined(read)
        int methodsnum;
        #if defined(SORT)
            methodsnum = 5;
        #elif defined(TOP)
            methodsnum = 2;
        #endif  
        for (int m = 0; m < methodsnum; m++)
        {
            std::vector<double> during_vec;
            std::ofstream outFile(ResultFilePath + to_string(m) + ".txt");

            for (int i = 0; i < sample;i++)
            {
                array = new int[length];

                ReadNumbers(DataFilePath + to_string(i) + ".txt", array, length);
                auto start = std::chrono::high_resolution_clock::now();

            #if defined(SORT)
                SortMethod sortmethod = static_cast<SortMethod>(m);
                switch (sortmethod) {
                    case SortMethod::Quick:
                        QuickSort(array, 0, length);
                        break;
                    case SortMethod::Bubble:
                        BubbleSort(array);
                        break;
                    case SortMethod::Select:
                        SelectSort(array);
                        break;
                    case SortMethod::Insert:
                        InsertSort(array);
                        break;
                    case SortMethod::Merge:
                        MergeSort(array, 0, length);
                        break;
                }
            #elif defined(TOP)
                TopMethod topmethod = static_cast<TopMethod>(m);
                switch (topmethod) {
                    case TopMethod::Quick:
                        QuickTop(array, K);
                        break;
                    case TopMethod::Heap:
                        HeapTopK(array, K);
                        break;
                }
            #endif
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> duration = end - start;
                double microseconds = duration.count() * pow(10, 6);

                during_vec.push_back(microseconds);
                outFile << microseconds << std::endl;

                delete array;
            }
            cout << calculateMean(during_vec) << endl;
            outFile << std::endl << calculateMean(during_vec) << std::endl;
        }
    #endif
}
