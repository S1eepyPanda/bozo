#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL)); // seed for random

int const SIZE = 10;
int arr[SIZE];
int Compare;

bool Already;
for (int i = 0; i < SIZE;)
{
    Already = false;
    int Value = rand()%20;

    for (int j = 0; j < i; j++)
    {
        if (arr[j]==Value)
        {
            Already = true;
            break;
        }
    }
    if (!Already)
    {
        arr[i] = Value;
        i++;
    }
}
        for (int i = 0; i < SIZE; i++)
    {
        cout<<arr[i]<<endl;
    }
Compare = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]<Compare)
        {
            Compare = arr[i];
        }
    }
    cout<<"Lowest number is: "<<Compare<<endl;
    
    return 0;
}