#include <iostream>
using namespace std;

int main()
{
int a,b,d = 0;
cout << "type range of numbers: " << endl;
cin >> a >> b;
do
{
    if (a%2 != 0)
    {
        d+= a;
    }
a++;
} while (a<=b);
cout << d;
}