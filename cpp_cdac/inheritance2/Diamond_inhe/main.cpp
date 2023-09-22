#include<iostream>

using namespace std;

class A{
    protected:
        int a;
    public:
    void Display(){
        cout<<"This in in calss A"<<endl;
    }
};

class B: virtual  A{
    protected:
        int b;
    public:
    void Display(){
        cout<<"This in in calss B "<<endl;
    }
};

class C: virtual A{
    protected:
        int c;
    public:
    void Display(){
        cout<<"This in in calss C "<<endl;
    }
};

class D:public B, public C{
    protected:
     int d;
    public:
    void Display(){
        cout<<"This in in calss D "<<endl;
    }
};


int main(){
    D d;
    d.Display();
    C c;
    c.Display();
    B b;
    b.Display();

    cout<<"Size of A: "<<sizeof(A)<<endl;
    cout<<"Size of B: "<<sizeof(B)<<endl;
    cout<<"Size of C: "<<sizeof(C)<<endl;
    cout<<"Size of D: "<<sizeof(D)<<endl;

    return 0;
}