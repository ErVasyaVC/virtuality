#include "Number.h"

Number::Number() {
    number = 0;
}

Number::Number(int integer) {
    number = integer;
}

Number Number::Assg(const Number& n){ // *this = n
    this->number = n.number;
    return *this;
}

Number Number::Add (const Number& n){
    Number output(this->number + n.number);
    return output;
} // *this + n

Number Number::Min (const Number& n){
    Number output(this->number - n.number);
    return output;
} // *this - n

Number Number::Mult(const Number& n){
    Number output(this->number * n.number);
    return output;
} // *this * n

Number Number::Div (const Number& n){
    Number output(this->number / n.number);
    return output;
} // *this / n

bool Number::Eq    (const Number& n){
    if(this->number == n.number){
        return true;
    } else{
        return false;
    }
} // *this == n

bool Number::NEq   (const Number& n){
    if(this->number != n.number){
        return true;
    } else{
        return false;
    }
} // *this != n

bool Number::More  (const Number& n){
    if(this->number > n.number){
        return true;
    } else{
        return false;
    }
} // *this > n

bool Number::Less  (const Number& n){
    if(this->number < n.number){
        return true;
    } else{
        return false;
    }
} // *this < n

void Number::Input (){
    cin >> number;
}; // cin >> *this

void Number::Output(){
    cout << number << endl;
}; // cout << *this

double Number::Asdouble (){
    return static_cast<double>(number);
}; // *this -> double