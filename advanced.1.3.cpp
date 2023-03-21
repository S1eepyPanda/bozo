#include <iostream>
using namespace std;

/*void foo(int q, int a = 5, double b = 0.5) // Сначала идут параметры без значений
{
 for (int i = 0; i < a; i++)
 {
    cout<<"#"<<endl;
 }
}

void main()
{
    foo(10, 0.7);
} */

/*inline int Sum(int a, int b) // inline встраивает выражение в память main(), поддерживает только простые функции, также часто vs сам будет так подстраивать без inline когда подходит
{
    return a + b;
}

void main()
{

} */


/*template <class T>  // можно использовать typename вместо class
void sum(T a) // через запятую указывать например T1 a,T2 b
{
    cout << a << endl;
}

void main()
{
    sum(2);
} */

int Fact(int N)
{
    if (N == 0)
    return 0;
    if (N==1)
    return 1;
    return N * Fact(N - 1);
}

int main()
{
    cout<< Fact(5) << endl;
    return 0;
}