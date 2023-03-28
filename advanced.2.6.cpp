#include <iostream>
#include <cstring>
using namespace std;
/*
void test()
{

}

int main()
{
char string [] = {'H','e','l','l','o','\0'}; // \0 доминирующий ноль, всегда присутствует в строках на конце массива, является обозначением чтобы закончить считывать строку
cout << string << endl; 
return 0;
} */
void foo(const char *str)
{
    cout << strlen(str) << endl;
}

int main()
{
    //char *string = "Hello"; // массив с одним значением строки
    //char *strArr[] = {"hello","world","test"}; // одномерный массив с множественным количеством строк
    const char str[] = "hello";
    foo(str);
return 0;
}
