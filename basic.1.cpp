#include <iostream>
using namespace std;
// логические операторы
/*
&& - и
|| - или
!= - не; !(a==b) инвертирует
*/
int main()
{
int a = 3;
int b = 3;

cout << ((a==b) && (5>4)) << endl;
cout << ((3 == 3) || (1>0)) << endl; // проверяется до первого true
return 0;
}