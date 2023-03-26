#include <iostream>
#include <string>
using namespace std;

/*void main()
{
    int *pa = new int; // обязательно использовать указатель, new выделяет место динамической памяти, для очистки использовать delete
    *pa = 10;
    cout <<*pa <<endl;
    delete pa;
    pa = nullptr; // отличие от нуля в том, что это именно тип данных, не int как в случае с NULL
} */
/*int main()
{
    int size = 0;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<"\t";
        cout << arr + i<< endl;
    }
    
    delete [] arr; // для очищения массива необходимо указать [] после delete
    return 0; 
} */

int main()
{
    int rows;
    int cols;
    cin>>rows>>cols;
    int **arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    ///////////////////////////
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        arr[i][j] = rand() % 20;
    }
}
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << arr[i][j]<< "\t";
    }
    cout <<endl;
}
    ///////////////////////////
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    delete[] arr;
return 0;
}