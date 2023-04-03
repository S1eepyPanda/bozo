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
    private:
    int x;
    int y;

    public:

    void SetY(int valueY)
    {
        y = valueY;
    }
    int GetY()
    {
        return y;
    }
    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }
    void PrintX()
    {
        cout<<"X = "<<x<< "\t Y = "<<y<<endl<<endl;
    }
};

int main()
{
    Point a;
    a.SetY(11);
    a.SetX(5);
    a.PrintX();
    int result = a.GetX();
    cout<<result<<endl;
    return 0;
}