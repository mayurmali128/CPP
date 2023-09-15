#include<iostream>

using namespace std;

class Complex{
    int real,img;

    public:
        Complex();
        Complex(int,int);
        void Display() const;
        int getReal() const;
        int getImg() const;
};

Complex::Complex(){
    real = img = 1;
}

Complex::Complex(int i, int j){
    real = i;
    img = j;
}

void Complex::Display()const{
    if(img<0)
        cout<<"Complex Number is: "<<real<<img<<"j"<<endl;
    else 
        cout<<"Complex Number is: "<<real<<"+"<<img<<"j"<<endl;
}

int Complex::getReal()const{
    return real;
}

int Complex::getImg()const{
    return img;
}

int main(){

    //const object can call only const member functions

    const Complex n1;
    n1.Display();
    cout<<"Imaginary part of n1: "<<n1.getImg()<<endl;
    cout<<"Real part of n1: "<<n1.getReal()<<endl;
    

    const Complex n2(10,20);
    n2.Display();
    cout<<"Imaginary part of n2: "<<n2.getImg()<<endl;
    cout<<"Real part of n2: "<<n2.getReal()<<endl;
    
    //Non constant can call cona=stant as well as non constant member functions


    return 0;
}