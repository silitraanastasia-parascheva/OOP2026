#pragma once
#include <vector>
#include <string>

using namespace std;

class Sort
{
private:
    vector<int> v;

public:

    Sort(int count, int min, int max);
    Sort(initializer_list<int> list);
    Sort(string numbers);

    void InsertSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);

    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};
