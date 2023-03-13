#include <iostream>
using namespace std;
/*int main()
{
    int a = 18;
    do
    {
        cout << "a= " << a << endl;
        a++;
    } while (a<20);
return 0;
} {
    int a=0;
    while (a<10)
    {
        cout << "a = " << a << endl;
        a++;
    }
    return 0;
}
*/
int main ()
{
    int a, b, d = 0;
    char c;
    cout << "Type your simbol: " <<endl;
    cin >> c;
    cout << "How much simbols: " << endl;
    cin >> a;
    cout << "Type 1 for vertical or 2 for horizontal: " << endl;
    cin >> b;
    if (b!=1 && b!=2)
    {
        cout<<"wrong type"<<endl;
        return 0;
    }
    if (b==1)
    {
        while (a!=d)
        {
          cout << c <<endl;
          d++;
        }
    }
    else if (b==2)
    {
        while (a!=d)
        {
          cout << c;
          d++;
        }
    }
    return 0;
}