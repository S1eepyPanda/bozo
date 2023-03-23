#include <iostream>
using namespace std;



/* void main()
{
int a = 5;
int  *pa = &a;
int  *pa2 = &a; // указывает на тот же самый объект
cout <<*pa << endl;
} */

/* void main()
{
    const int SIZE = 5;
    int arr[SIZE]{4,55,79,1,4};
    int *pArr = arr; // указатель на первый элемент массива
    for (int i = 0; i <SIZE; i++)
    {
        cout <<*(pArr+i) <<endl; // для работы с тем что находится внутри указателя нужно указывать в начале *
    }
} */

/* void Foo(int *pa, int *pb, int *pc)
{
    (*pa)++;
    (*pb) = 55;
    (*pc) = -20;
}

int main()
{
    int a = 0, b = 0, c = 1;
    cout << a << b << c << endl;


    Foo(&a,&b,&c);

    cout << a << b << c << endl;
    return 0;
} */

void Swap(int *pa, int *pb)
{
    int fodder = *pa;
    *pa = *pb;
    *pb  = fodder;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Swap(&a,&b);
    cout << a << "\t" << b << endl;
    return 0;
}
