#include <iostream>
using namespace std;

/*void Foo(int a)
{
a = 1;
cout << a <<endl;
}

void Foo2(int &a)
{
a = 2;
}

void Foo3(int *a)
{
*a = 3;
}

int main()
{
    int value = 5;
    cout<<"value = "<<value<<endl;
    Foo(value);
    cout <<value <<endl;
    Foo2(value);
cout << value <<endl;
Foo3(&value);
cout << value << endl;
return 0;
} */

/*void Foo(int &a, int &b, int &c)
{
    a = 10;
    b *= 2;
    c -= 100;
}

int main()
{
 int a = 0, b = 4, c = 34;
 cout << a << endl << b << endl << c <<endl;
 Foo(a,b,c);
  cout << a << endl << b << endl << c <<endl;
return 0;
} */

template <class T1, class T2>
void Swap1(T1 &a, T2 &b)
{
T1 fodder = a;
a = b;
b = fodder;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Swap1(a,b);
    cout << a << "\t" << b << endl;
    return 0;
};
