#include "Complex.h"

Complex::Complex(){
    real = img = 0;
}
Complex :: Complex(int real ,int img){
    this->real = real;
    this->img = img;
}
void Complex :: Display(){
    if(img<0)
        cout<<"Complex Number is: "<<real<<img<<"j"<<endl;
    else 
        cout<<"Complex Number is: "<<real<<"+"<<img<<"j"<<endl;
}

Complex Complex:: operator+ (Complex &obj){
    Complex temp;

    temp.real = this->real + obj.real;
    temp.img = this->img + obj.img;
    return temp;
}

Complex Complex :: operator- (Complex &obj){
    Complex temp;

    temp.real = this->real - obj.real;
    temp.img = this->img - obj.img;
    return temp;
}

Complex Complex :: operator* (Complex &obj){
    Complex temp;

    temp.real = this->real * obj.real;
    temp.img = this->img * obj.img;
    return temp;
}

Complex Complex :: operator++ (){                       //preincrement
    real++;
    img++;
}

Complex Complex:: operator++ (int){                     //postincrement
    ++real;
    ++img;
}