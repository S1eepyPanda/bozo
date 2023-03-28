#include <iostream>
#include <string>
using namespace std;

/*int main()
{
    string str1 = "hello";
    string str2 = "world";
    string result;
    result = str1 + " " + str2;
    cout<< result << endl;
    return 0;
} */

string DataFromBD()
{
    return "Data From BD";
}
string DataFromWebServer()
{
    return "data From WebServer";
}
void ShowInfo(string (*foo)())
{
    cout<<foo()<<endl;
}

int main()
{
    ShowInfo(DataFromWebServer);
}