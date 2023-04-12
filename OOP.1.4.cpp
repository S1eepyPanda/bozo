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
class Myclass
{
private:
    int* data;
public:
    Myclass(int size)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout<<data<< "test"<<endl;
    }

    ~Myclass()
    {
        delete[] data;
    cout<<data<<"destruct"<<endl;
    }

};
void Foo()
{
    cout<<"Foo start"<<endl;
    Myclass a(3);
    cout<<"Foo end"<<endl;
}
int main()
{
Myclass a(1);
Myclass b(2);
Foo();
return 0;
}