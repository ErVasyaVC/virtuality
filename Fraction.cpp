#include "Fraction.h"
#include <math.h>

Fraction::Fraction(){
    number = 0;
    fractional = 0;
    lenFract = 1;
}

Fraction::Fraction(int integerPart, int fractionalPart){
    number = integerPart;
    fractional = fractionalPart;
    lenFract = 0;
    while (fractionalPart >0){
        fractionalPart /= 10;
        ++lenFract;
    }
    if(fractional == 0){
        lenFract = 1;
    }
}



Number Fraction::Assg(const Number& n) {
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    number = other.number;
    fractional = other.fractional;
    return *this;
}
Number Fraction::Add(const Number& n) {
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    Fraction output(number, fractional);
    number += other.number;
    int resultFract;
    if(lenFract > other.lenFract){
        fractional += other.fractional * pow(10, lenFract-other.lenFract);
    } else if(lenFract < other.lenFract){
        fractional = other.fractional + fractional * pow(10, other.lenFract - lenFract);
       lenFract = other.lenFract;
    } else{
        fractional += other.fractional;
    }
    resultFract = fractional;
    int newlenFract = 0;
    while (resultFract >0){
        resultFract /= 10;
        ++newlenFract;
    }
    if(newlenFract != lenFract){
        number++;
        int len = pow(10, lenFract);
        fractional = fractional % len;
    }


    return *this;
}

bool Fraction::Eq    (const Number& n){
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    if(this->number == other.number && this->fractional == other.fractional){
        return true;
    } else{
        return false;
    }
} // *this == n

bool Fraction::NEq   (const Number& n){
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    if(this->number != other.number){
        return true;
    } else{
        return false;
    }
} // *this != n

bool Fraction::More  (const Number& n){
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    if(this->number > other.number){
        return true;
    } else{
        return false;
    }
} // *this > n

bool Fraction::Less  (const Number& n){
    const Fraction& other = dynamic_cast<const Fraction&>(n);
    if(this->number < other.number){
        return true;
    } else{
        return false;
    }
} // *this < n


//void Fraction::Input(){
//
//}// cin >> *this


void Fraction::Output(){
    cout << number << "." << fractional << endl;
}