#include <iostream>
#include <fstream>
#include <random>  

template<typename T>
void WriteNumbers(std::string filePath, int length, T minRange, T maxRange)
{
    std::ofstream outFile(filePath);
    if (!outFile.is_open()) {
        std::cerr << "Unable to open file for writing: " << filePath << std::endl;
        return;
    }

    std::random_device rd;
    std::default_random_engine engine(rd());

    std::uniform_int_distribution<T> dist(minRange, maxRange);

    for (int i = 0; i < length; ++i) {
        T randomNum = dist(rd);
        outFile << randomNum << std::endl;
    }

    outFile.close();
}
