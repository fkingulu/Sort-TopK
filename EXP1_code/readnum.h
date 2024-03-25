#include<iostream>
#include<fstream>

using namespace std;

template<typename T>
void ReadNumbers(string filePath, T* array, int length)
{
    ifstream inFile(filePath);
    if (!inFile.is_open()) {
        cout << "Failed to open file: " << filePath << endl;
        return;
    }

    int temp;
    for (int i = 0; inFile >> temp && i < length; i++)
    {
        array[i] = temp;
    }
}