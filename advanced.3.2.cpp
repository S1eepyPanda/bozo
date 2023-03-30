#include <iostream>
using namespace std;

/*int main()
{
    int a;
    cin>>a;
    int a;
     cin >> a;
    if (a<10)
    {
        cout<<"a<10"<<endl;
    }
    else
    {
         cout<<"a>10"<<endl;
    } 
 (a<10) ? (cout<<"a<10"<<endl) : (a>10) ? (cout << "a>10"<<endl) : (cout <<"a=10" <<endl);   // круглые скобки нужны для понимания, их можно не писать
    return 0;
} */
int main(int argc, char* argv[]) // argc = колличество аргументов, argv = значения которые будут выходить при определенных аргументах
{
for (int i = 0; i < argc; i++)
{
    cout << argv[i] <<endl;
}
system("pause");
return 0;
}