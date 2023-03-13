#include <iostream>
using namespace std;

/* int main()
{
    for (int i = 1; i < 5; i++)
    {
        cout << "first: " << i << endl;
        
        for (int j = 1; j<5; j++)
        {
            cout << "second: " << j << endl;
        }
    }
    return 0;
} */
int main()
{
    int a,b;
    cout<< "Enter size of sides: "<< endl;
    cin >> a >> b;
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
        cout << "*";
    }
    cout << endl;
    }        
    return 0;
}