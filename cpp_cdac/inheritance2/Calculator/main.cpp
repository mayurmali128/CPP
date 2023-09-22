#include<iostream>

using namespace std;

class Math1{
    public:
        void Add(int , int );
        void Subs(int , int );
        void calArea(int);
};

void Math1::Add(int a, int b){
    cout<<a <<" + "<<b<<" = "<<a+b<<endl;
}

void Math1::Subs(int a, int b){
    cout<<a <<" - "<<b<<" = "<<a-b<<endl;
}

void Math1::calArea(int r){
    cout<<"Area of Circle: "<<3.14*r*r<<endl;
}

class Math2{
    public:
        void Mul(int, int);
        void Div(int,int);
        void calArea(int);
};

void Math2::Mul(int a, int b){
    cout<<a <<" * "<<b<<" = "<<a*b<<endl;
}

void Math2::Div(int a,int b){
    cout<<a <<" / "<<b<<" = "<<a/b<<endl;
}

void Math2::calArea(int side){
    cout<<"Area of square: "<<side*side<<endl;
}


//multiple inheritance

class Calculator:public Math1, public Math2{

};

int main(){
    Calculator c;
    c.Add(10,20);
    c.Subs(20,10);
    c.Mul(10,20);
    c.Div(20,10);
    //c.calArea(20)    ambigious class
    c.Math1::calArea(10);
    c.Math1::calArea(20);
    return 0;
}