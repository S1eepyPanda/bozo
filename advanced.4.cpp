#include <iostream>
using namespace std;

int main()
{
/*const int ROW = 2;
const int COL = 4;

int arr[ROW][COL] 
{
{2, 4, 66, 1}, // 0 строка
{4344,3,6,1},  // 1 строка
}; */
const int ROWS = 5;
const int COLS = 8;
int arr[ROWS][COLS];

for (int i = 0; i < ROWS; i++)
{

    for (int j = 0; j < COLS; j++)
    {
        arr[i][j] = rand()%10;
        cout<<arr[i][j]<<" ";
    }    
cout<<endl;
}
}