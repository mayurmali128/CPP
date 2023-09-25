#include<iostream>

using namespace std;

class Complex{
    int real,img;

    public:
        Complex();
        Complex(int,int);
        void Display();
        friend Complex operator+ (int,Complex&);
};

Complex::Complex(){
    real = img = 0;
}

Complex::Complex(int r,int i){
    real = r;
    img = i;
}

void Complex::Display(){
     if(img<0)
        cout<<"Complex Number is: "<<real<<img<<"j"<<endl;
    else 
        cout<<"Complex Number is: "<<real<<"+"<<img<<"j"<<endl;
}

Complex operator+(int n, Complex& obj){
    Complex temp;
    temp.real = n + obj.real;
    temp.img = obj.img;
    return temp;
}


int main(){
    Complex c1(10,20);
    Complex c2(20,30);

    //+ operator overloading used
    Complex c3 = 5 + c1; 
    c3.Display();
    return 0;
}