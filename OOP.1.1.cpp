#include <iostream>
#include <string>
using namespace std;

class Human 
{
public: // модификатор доступа который даёт доступ к данным везде.
    int age;
    int weight;
    string name;

    void Print()
    {
        cout<<"Name "<<name<<"\tWeight "<< weight<< "\t Age "<<age<<endl;
    }
};
class Point 
{
public: 
    int x;
    int y;
    void Print()
    {
        cout<<x<<endl<<y<<endl;
        PrintY();
    }
private:// модификатор доступа который даёт доступ только внутри класса, распространяется на всё, включая методы
void PrintY()
{
    cout <<z<<endl;
    cout<<"PrintY()"<<endl;
}
int z; 
};
int main()
{
    Human firstHuman;
    firstHuman.age=30;
    firstHuman.name="Ivan";
    firstHuman.weight = 100;
    firstHuman.Print();
    /*cout <<firstHuman.age<<endl;
    cout <<firstHuman.name<<endl;
    cout <<firstHuman.weight<<endl; */
    return 0;
    Point a;
}