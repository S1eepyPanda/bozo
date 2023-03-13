#include <iostream>
using namespace std;

/* int main()
{
    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "1" << endl;
        break;    
    case 2:
        cout << "2" << endl;
        break;

    default: // optional
        cout <<"idk" << endl;
        break;
    }

return 0;
}
*/
int main ()
{
int a,b;
int c;
cout << "Enter numbers: " << endl;
cin >> a >> b;
cout << "Enter operation with corresponding number: 1:+ 2:- 3:* 4:/ " << endl;
cin >> c; // можно выполнить через char, в case указывать знаки через ''
switch (c)
{
    case 1:
    cout << a+b<<endl;
    break;
    case 2:
    cout << a-b<<endl;
    break;
    case 3:
    cout << a*b<<endl;
    break;
    case 4:
    cout << (float)a/b<<endl; // указывает именно для этой операции тип
    break;
    default:
    cout << "wrong number, try again." <<endl;
    break;
}
return 0;
}
