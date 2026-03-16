#include "Sort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

Sort::Sort(int count, int min, int max)
{
    srand(time(NULL));
    for (int i = 0; i < count; i++)
    {
        int x = min + rand() % (max - min + 1);
        v.push_back(x);
    }
}

Sort::Sort(initializer_list<int> list)
{
    for (int x : list)
        v.push_back(x);
}

Sort::Sort(string numbers)
{
    stringstream ss(numbers);
    string nr;

    while (getline(ss, nr, ','))
        v.push_back(stoi(nr));
}

void Sort::Print()
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int Sort::GetElementsCount()
{
    return v.size();
}

int Sort::GetElementFromIndex(int index)
{
    if (index >= 0 && index < v.size())
        return v[index];
    return -1;
}

void Sort::BubbleSort(bool ascendent)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ascendent)
            {
                if (v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
            else
            {
                if (v[j] < v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }
}

void Sort::InsertSort(bool ascendent)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && ((ascendent && v[j] > key) || (!ascendent && v[j] < key)))
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

void Sort::QuickSort(bool ascendent)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if ((ascendent && v[i] > v[j]) || (!ascendent && v[i] < v[j]))
                swap(v[i], v[j]);
        }
}