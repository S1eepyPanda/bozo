#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() //копирование динамическокого массива
{
    int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

FillArray(firstArray, size);
FillArray(secondArray, size);
ShowArray(firstArray, size);
ShowArray(secondArray, size);
delete[] firstArray;
firstArray = new int[size];
for (int i = 0; i < size; i++)
{
    firstArray[i] = secondArray[i];
}
ShowArray(firstArray, size);
    delete[]firstArray;
    delete[]secondArray;
    return 0;
}