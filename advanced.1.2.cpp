#include <iostream>
using namespace std;
void PrintArray(int arr[], const int size); // прототип функции позволяет увидеть программу после её инциализации
/*int Foo(int a)
{
    return ++a;
}

int main()
{
    int a = 1;
    a = Foo(a);
    cout <<a<<endl;
} */


void FillArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    FillArray(arr,SIZE);
    PrintArray(arr,SIZE);
}

void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

}
