#include <iostream>
//#define FOO(x,y)((x)*(y)) // макрос, важно чтобы название макроса примыкало к скобке.
#define DEBUG //5
using namespace std;

int main()
{
//    cout<< FOO(5,6)<<endl; // пример вызова макроса
/*#ifdef DEBUG
    cout << "beginning"<<endl;
#endif //DEBUG
cout<<"test"<<endl;
#ifdef DEBUG
    cout <<"ending"<<endl;
#endif //DEBUG */
// #if DEBUG < 4 как пример можно так использовать данную функцию
// #elif DEBUG == 5 работает как else if
#ifdef DEBUG // #ifndef выполняет ту же функцию, только инвертирует работу оригинальной #ifdef
    cout<<"debug true" <<endl;
#else
    cout<<"debug false"<<endl;
#endif // DEBUg
return 0;
}