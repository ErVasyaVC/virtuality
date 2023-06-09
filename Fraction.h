#include "Number.h"

class Fraction: public Number{
private:;
    int fractional;
    int lenFract;
public:

    Fraction();
    Fraction(int integerPart, int fractionalPart);
    Number Assg(const Number& n) override;  // *this = n
    Number Add (const Number& n) override; // *this + n
//    Number Min (const Number& n) override; // *this - n
//    Number Mult(const Number& n) override; // *this * n
//    Number Div (const Number& n) override; // *this / n
    bool Eq    (const Number& n) override; // *this == n
    bool NEq   (const Number& n) override; // *this != n
    bool More  (const Number& n) override; // *this > n
    bool Less  (const Number& n) override; // *this < n
//    void Input () override; // cin >> *this
    void Output() override; // cout << *this
//    void FromStream (ifstream stream) override; // stream >> *this
//    void ToStream   (ofstream stream) override; // stream << *this
//    double Asdouble () override; // *this -> double
};