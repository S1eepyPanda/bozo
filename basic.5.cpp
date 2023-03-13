#include <iostream>
using namespace std;

int main()
{
for (int i = 0; i < 5; i++)
{
    if (i==2)
    {
        continue; // пропускает цикл
    }
    cout <<"i = "<< i << endl;
}

return 0;
}
//system("pause") не закрывает консоль
// goto "переменная" сразу перейдёт к этой переменной и будет работать от неё дальше, не рекомендуется использовать