
#include<iostream>

using namespace std;

class Complex{
    
    int real,img;
    public:
        Complex();
        Complex(int,int);
        void Display();
        Complex operator+ (Complex &);
        Complex operator- (Complex &);
        Complex operator* (Complex &);
        Complex operator++ ();         //preincrement
        Complex operator++ (int);      //postincrement
};