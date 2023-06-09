#include <typeinfo>
#include "Fraction.h"
#include <math.h>
void Demo(Number& n1, Number& n2, Number& n3)
{
    double d1, d2, d3;
    cout << "Класс " << typeid(n1).name() << endl; // имя класса
    cout << "n1 = "; n1.Output();
    cout << "n2 = "; n2.Output();

    n1.Add (n2);
    n3.Assg(n1);
    cout << "n1 + n2 = "; n3.Output(); cout << "("<< d1 + d2 << ")" << endl;


    cout << "n1 == n2: " << n1.Eq  (n2) << endl;
    cout << "n1 != n2: " << n1.NEq (n2) << endl;
    cout << "n1 >  n2: " << n1.More(n2) << endl;
    cout << "n1 <  n2: " << n1.Less(n2) << endl;
}
int main()
{
    Number n1(25), n2(7), n3;
    Demo(n1, n2, n3);
    Fraction f1, f2(2, 8), f3(5, 34);
    Demo(f1, f2, f3);

    return 0;
}
