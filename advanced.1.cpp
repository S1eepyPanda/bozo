#include <iostream>
using namespace std;

/*int main()
{
    int arr [] = {1,2,8,5}; // можно просто записать скобки чтобы записало 0 в значения. 
    cout << arr[5] << endl; // для определения размера массива если не указана константа или размер массива, можно узнать его с помощью sizeof(arr)/sizeof(arr[0]) который показывает кол-во байт
}*/

int main()
{
    const int SIZE = 5; 
    int arr[SIZE]{55,511,2,123,95}; 

    for (int i = 0; i < SIZE; i++)
    {
        cout<<arr[i]<<endl; // arr[i] = i; как пример заполнения для цикла
    }
return 0;
}