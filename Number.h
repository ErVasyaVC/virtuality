#ifndef VIRTUAL_NUMBER_H
#define VIRTUAL_NUMBER_H
#include <iostream>
#include <typeinfo>

using namespace std;

class Number
{
protected:
    int number;
public:
    Number();
    Number(int integer);
    virtual Number Assg(const Number& n); // *this = n
    virtual Number Add (const Number& n); // *this + n
    virtual Number Min (const Number& n); // *this - n
    virtual Number Mult(const Number& n); // *this * n
    virtual Number Div (const Number& n); // *this / n
    virtual bool Eq    (const Number& n); // *this == n
    virtual bool NEq   (const Number& n); // *this != n
    virtual bool More  (const Number& n); // *this > n
    virtual bool Less  (const Number& n); // *this < n
    virtual void Input (); // cin >> *this
    virtual void Output(); // cout << *this
//    virtual void FromStream (ifstream stream); // stream >> *this
//    virtual void ToStream   (ofstream stream); // stream << *this
    virtual double Asdouble (); // *this -> double
};
#endif //VIRTUAL_NUMBER_H
