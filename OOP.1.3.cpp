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
    Point()
    {
        x = 0;
        y = 0;
    }

Point(int valueX, int valueY)
{
    x = valueX;
    y = valueY;
}
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
    void Print()
    {
        cout<<"X = "<<x<< "\t Y = "<<y<<endl<<endl;
    }
};
class CoffeeGrinder
{
private:
bool CheckVoltage()
{
    return true;
}
public:
    void start()
    {
        if(CheckVoltage())
        {
        cout<<"vjuh"<<endl;
        }
        else
        {
            cout<<"beep"<<endl;
        }
    }
};
int main()
{
Point a;
a.Print();
Point b(4,10);
b.Print();
return 0;
}