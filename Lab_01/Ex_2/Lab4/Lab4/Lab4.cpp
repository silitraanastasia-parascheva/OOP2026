#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    Sort s1(5, 1, 100);
    s1.Print();

    s1.BubbleSort(true);
    cout << "Dupa BubbleSort:\n";
    s1.Print();

    Sort s2{ 5,3,8,1,9 };
    s2.Print();

    s2.InsertSort(true);
    cout << "Dupa InsertSort:\n";
    s2.Print();

    Sort s3("10,40,100,5,70");
    s3.Print();

    s3.QuickSort(true);
    cout << "Dupa QuickSort:\n";
    s3.Print();

    cout << "Numar elemente: " << s3.GetElementsCount() << endl;
    cout << "Element index 2: " << s3.GetElementFromIndex(2) << endl;

    return 0;
}