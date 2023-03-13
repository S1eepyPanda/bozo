#include <iostream>
using namespace std;

/*int main()
{
    bool isRain = true; // если false то дальше обычного if не пройдёт

    if (isRain)
    {
        cout << "Rain" << endl;
    }
    else
    {
         cout << "No rain yay" << endl;
    }
return 0;
}
*/

/*int main()
{
int a;
cout << "Enter number: " << endl;
cin >> a;

if (a>5)
{
    cout <<"Your number is greater than 5" <<endl;
}
else if(a==5)
{
    cout <<"Your number is equal to 5" << endl;
}
else
{
    cout <<"Your number is less than 5" << endl;
}
return 0;
}
*/

int main()
{
int a;
cout << "Enter number: " << endl;
cin >> a;
if (a%2!=0)
{
    cout << "Your number is uneven" << endl;
}
else 
{
    cout << "Your number is odd" << endl;
}
return 0;
}