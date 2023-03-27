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

void push_back(int *&arr, int &size,const int value)
{
    int *newArray = new int [size+1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
}

void pop_back(int *&arr, int &size)
{
    size--;
    int *newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    delete[] arr;
    arr = newArray;
}
void push_start(int *&arr, int &size, const int value)
{
    int *newArray = new int [size+1];
    newArray[0] = value;
    for (int i = 0; i < size+1; i++)
    {
        newArray[i+1] = arr[i];
    }
    size++;
    delete[] arr;
    arr = newArray;
}
void pop_start(int *&arr, int &size)
{
    size--;
    int *newArray = new int [size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i+1];
    }
    delete[] arr;
    arr = newArray;
}
void push_middle(int*&arr, int &size, const int value, const int position)
{
    int*newArray = new int [size+1];
    for (int i = 0; i < position; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[position] = value;
    for (int i = position; i < size+1; i++)
    {
        newArray[i+1] = arr[i];
    }
    size++;
    delete[] arr;
    arr = newArray;
}
void pop_middle(int*&arr, int &size, const int position)
{
    size--;
    int*newArray = new int [size];
    for (int i = 0; i < position; i++)
    {
        newArray[i] = arr[i];
    }
    for (int i = position; i < size; i++)
    {
        newArray[i] = arr[i+1];
    }
    delete[] arr;
    arr = newArray;
}
int main()
{
int size = 5;
int *arr = new int[size];
FillArray(arr, size);
ShowArray(arr, size);
push_back(arr, size, 111);
ShowArray(arr, size);
pop_back(arr, size);
ShowArray(arr, size);
push_start(arr, size, 56);
ShowArray(arr, size);
pop_start(arr, size);
ShowArray(arr, size);
push_middle(arr,size,22,3);
ShowArray(arr,size);
pop_middle(arr, size, 3);
ShowArray(arr, size);
delete[] arr;
return 0;
}